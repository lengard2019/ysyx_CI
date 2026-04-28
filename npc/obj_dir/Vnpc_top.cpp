// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnpc_top__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vnpc_top::Vnpc_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnpc_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vnpc_top::Vnpc_top(const char* _vcname__)
    : Vnpc_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnpc_top::~Vnpc_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnpc_top___024root___eval_debug_assertions(Vnpc_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vnpc_top___024root___eval_static(Vnpc_top___024root* vlSelf);
void Vnpc_top___024root___eval_initial(Vnpc_top___024root* vlSelf);
void Vnpc_top___024root___eval_settle(Vnpc_top___024root* vlSelf);
void Vnpc_top___024root___eval(Vnpc_top___024root* vlSelf);

void Vnpc_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnpc_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnpc_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnpc_top___024root___eval_static(&(vlSymsp->TOP));
        Vnpc_top___024root___eval_initial(&(vlSymsp->TOP));
        Vnpc_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnpc_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnpc_top::eventsPending() { return false; }

uint64_t Vnpc_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vnpc_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnpc_top___024root___eval_final(Vnpc_top___024root* vlSelf);

VL_ATTR_COLD void Vnpc_top::final() {
    Vnpc_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnpc_top::hierName() const { return vlSymsp->name(); }
const char* Vnpc_top::modelName() const { return "Vnpc_top"; }
unsigned Vnpc_top::threads() const { return 1; }
void Vnpc_top::prepareClone() const { contextp()->prepareClone(); }
void Vnpc_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vnpc_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vnpc_top___024root__trace_decl_types(VerilatedFst* tracep);

void Vnpc_top___024root__trace_init_top(Vnpc_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnpc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc_top___024root*>(voidSelf);
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vnpc_top___024root__trace_decl_types(tracep);
    Vnpc_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnpc_top___024root__trace_register(Vnpc_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vnpc_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vnpc_top::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vnpc_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
