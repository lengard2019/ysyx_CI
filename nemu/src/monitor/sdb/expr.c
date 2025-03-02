/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, 
  PLUS      = 0,
  TK_EQ     = 1,
  MINUS     = 2,
  MULTI     = 3,
  DIV       = 4,
  LEFT      = 5,
  RIGHT     = 6,
  NUM       = 7,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", PLUS},         // plus，匹配后返回ASCII码值
  {"==", TK_EQ},        // equal
  {"\\-", MINUS},         // minus
  {"\\*", MULTI},         // multi
  {"\\/", DIV},         // div
  {"\\(", LEFT},
  {"\\)", RIGHT},
  {"[0-9]+", NUM},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {//编译正则表达式
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};//即使某个变量或函数没有被显式使用，也不要优化掉它。
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        // printf("%d %d\n", i, rules[i].token_type);

        switch (rules[i].token_type) {

          case(TK_NOTYPE): 
              break;

          case(PLUS): 
              tokens[nr_token].type = PLUS;
              strcpy(tokens[nr_token].str, "+");
              nr_token ++;
              break;

          case(TK_EQ):
              tokens[nr_token].type = TK_EQ;
              strcpy(tokens[nr_token].str, "==");
              nr_token ++;
              break;

          case(MINUS):
              tokens[nr_token].type = MINUS;
              strcpy(tokens[nr_token].str, "-");
              nr_token ++;
              break;

          case(MULTI):
              tokens[nr_token].type = MULTI;
              strcpy(tokens[nr_token].str, "*");
              nr_token ++;
              break;

          case(DIV): 
              tokens[nr_token].type = DIV;
              strcpy(tokens[nr_token].str, "/");
              nr_token ++;
              break;

          case(LEFT): 
              tokens[nr_token].type = LEFT;
              strcpy(tokens[nr_token].str, "(");
              nr_token ++;
              break;

          case(RIGHT): 
              tokens[nr_token].type = RIGHT;
              strcpy(tokens[nr_token].str, ")");
              nr_token ++;
              break;

          case(NUM): 
              tokens[nr_token].type = NUM;
              strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
              nr_token++;
              break;

          default: 
              printf("no match\n");
              break;
        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true; 
}


static bool check_parentheses(int p, int q)//判断总式或子式是否符合要求
{
  if(tokens[p].type != LEFT  || tokens[q].type != RIGHT)
    return false;
  int l = p , r = q;
  while(l < r)
  {
    if(tokens[l].type == LEFT){
      if(tokens[r].type == RIGHT)
        {
          l ++ , r --;
          continue;
        }

      else
        r --;
    }
    else if(tokens[l].type == RIGHT)
      return false;
    else l ++;
  }
  return true;
}

uint32_t eval(int p, int q) {
  if (p > q) {
    /* Bad expression */
    // printf("%d %d %d\n", nr_token, p, q);
    assert(0);
    return -1;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    return atoi(tokens[p].str);
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    int op = -1;//the position of 主运算符 in the token expression;
    bool flag = false;//判断是否是加减号

    //搜索主运算符的位置
    for(int i = p; i < q; i++){
      if(tokens[i].type == LEFT)//括号内最后算
        {
          while(tokens[i].type != RIGHT){
            i ++;//若没有找到，将返回到Bad expression
          }
          i++; 
        }
      if(tokens[i].type == RIGHT)//跳过括号后不应该先出现右括号
        {
          printf("wrong parentheses used\n");
          assert(0);
          return -1;
        }
      if(!flag && ((tokens[i].type == PLUS) || (tokens[i].type == MINUS))){
        flag = true;
        // op = i;
        op = (op > i) ? op : i;
      }
      if(!flag && ((tokens[i].type == MULTI) || (tokens[i].type == DIV))){
        op = i;
        op = (op > i) ? op : i;
      }
    }
    int op_type =  tokens[op].type;

    uint32_t val1 = eval(p, op - 1);
    uint32_t val2 = eval(op + 1, q);

    switch (op_type) {
      case PLUS: 
        return val1 + val2;
      case MINUS: 
        return val1 - val2;
      case MULTI: 
        return val1 * val2;
      case DIV: 
        if (val2 == 0){
          printf("division can't be 0\n");
          return -1;
        }
        else{
          return val1 / val2;
        }  
      default: assert(0);
    }
  }
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  word_t result = 0;
  // printf("%d\n", NR_REGEX);
  // for (int i = 0; i < nr_token; i++){
  //   printf("%d %s\n",tokens[i].type, tokens[i].str);
  // }

  if(tokens[0].type != LEFT  || tokens[nr_token-1].type != RIGHT){
    printf("please add a pair of parentheses\n");
    return -1;
  }

  /* TODO: Insert codes to evaluate the expression. */
  result = eval(0, nr_token - 1);

  return result;
}

//for test
static int index_buf __attribute__((used))  = 0;
static char buf[32] __attribute__((used));

int choose(int n){
    int flag = rand() % 3 ; // 0 1 2
	  printf("index = %d, flag = %d. \n",index_buf, flag);
    return flag;
}

void gen_num(){
    int num = rand()% 100;
    int num_size = 0, num_tmp = num;
    while(num_tmp){
	    num_tmp /= 10;
	    num_size ++;
    }
    int x = 1;
    while(num_size)
    {
	    x *= 10;
	    num_size -- ;
    }
    x /= 10;
    while(num)
    {
	    char c = num / x + '0';
	    num %= x;
	    x /= 10;
	    buf[index_buf ++] = c;
    }
}

void gen(char c){
    buf[index_buf ++] = c;
}

void gen_rand_op(){
    char op[4] = {'+', '-', '*', '/'};
    int op_position = rand() % 4;
    buf[index_buf ++] = op[op_position];
}

static void gen_rand_expr() {
    //    buf[0] = '\0';
    printf("%d\n",index_buf);	
    if(index_buf > 32)
       	printf("overSize\n");
    switch (choose(3)) {
	    case 0:
	      gen_num();
	      break;
	    case 1:
	      gen('(');
	      gen_rand_expr();
	      gen(')');
	      break;
	    default:
	      gen_rand_expr();
	      gen_rand_op();
	      gen_rand_expr();
	      break;
    }
}

void gen_expr(){
  gen_rand_expr();
  index_buf = 0;
  memset(buf, 0, sizeof(buf));
  printf("%s\n",buf);
}
