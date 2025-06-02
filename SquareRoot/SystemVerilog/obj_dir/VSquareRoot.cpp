// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSquareRoot__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSquareRoot::VSquareRoot(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSquareRoot__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSquareRoot::VSquareRoot(const char* _vcname__)
    : VSquareRoot(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSquareRoot::~VSquareRoot() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSquareRoot___024root___eval_debug_assertions(VSquareRoot___024root* vlSelf);
#endif  // VL_DEBUG
void VSquareRoot___024root___eval_static(VSquareRoot___024root* vlSelf);
void VSquareRoot___024root___eval_initial(VSquareRoot___024root* vlSelf);
void VSquareRoot___024root___eval_settle(VSquareRoot___024root* vlSelf);
void VSquareRoot___024root___eval(VSquareRoot___024root* vlSelf);

void VSquareRoot::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSquareRoot::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSquareRoot___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSquareRoot___024root___eval_static(&(vlSymsp->TOP));
        VSquareRoot___024root___eval_initial(&(vlSymsp->TOP));
        VSquareRoot___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSquareRoot___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSquareRoot::eventsPending() { return false; }

uint64_t VSquareRoot::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSquareRoot::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSquareRoot___024root___eval_final(VSquareRoot___024root* vlSelf);

VL_ATTR_COLD void VSquareRoot::final() {
    VSquareRoot___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSquareRoot::hierName() const { return vlSymsp->name(); }
const char* VSquareRoot::modelName() const { return "VSquareRoot"; }
unsigned VSquareRoot::threads() const { return 1; }
void VSquareRoot::prepareClone() const { contextp()->prepareClone(); }
void VSquareRoot::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSquareRoot::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSquareRoot___024root__trace_decl_types(VerilatedVcd* tracep);

void VSquareRoot___024root__trace_init_top(VSquareRoot___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSquareRoot___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSquareRoot___024root*>(voidSelf);
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VSquareRoot___024root__trace_decl_types(tracep);
    VSquareRoot___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSquareRoot___024root__trace_register(VSquareRoot___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSquareRoot::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSquareRoot::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSquareRoot___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
