<p align='center'>
    <image width=300 height=300 src='Meds.png'>
    <h1 align='center' style='italic'><i>Key Takeaways: Digital Design and Computer Architecture (from Onur's Lectures)</i>
</p>



# *Lecture 1: Introduction*
## **1. Overview**
- **Working of Modern computers (From Ground Up):** How they are actually implemented on hardware (Logic gates → Transistors → MicroProcessors)
- **Goals** 
    - Understand the Basics.
    - Learn how to optimize a system.

## **2. Computer Architecture Basics**
<p align='center'>
    <image width=350 height=300 src='transformation_hie.png'>
    <p align='center'><i>Transformation Hierarchy</i></p>
</p>

- **Narrow View:**
  - **Software-Hardware Interface(ISA):** Interface to deal with software to hardware compilation.
  - **Micro-Architecture:** How ISA is implemented.
-  **Expanded View:**
   - **Algorithm** to **Devices**.
   - To achieve efficiency, robustness and performance, *co-design across the hierarchy* (design each part according to the to each of the other parts, taking the synthesizability and implementation under consideration).

## **3. Additional Content**

- **Heterogeneity:** A combination of different Computational Units/Processors to get optimal performance.
- **System Flexibity:**
    - Flexible/General Purpose Systems: Good at General Purpose use, but are less efficient.
    - Inflexible/Special Purpose System: Designed for only specific tasks and give high performance.
  
## **4. Transistors as Building Blocks**

- **MOS Transistors:** Acts as Switches. In NMOS, a high voltage at gate means the switch is closed and vice versa, in PMOS, a high voltage at gates means the circuit is open.
- **CMOS Technology:** Uses combination of NMOS and PMOS to implement different gates like NOT, AND etc
<p  align='center'>
    <image width=200 height=200 src='not.png'>
    <p align='center'><i>CMOS NOT gate</i>
</p>
NOT and NAND are the simplest gates we can design from CMOS and we mostly combine these to implement other gates.

For represetation, instead of using actual transistor equivalent diagrams for a gate, we'll use abstracted models/symbols (AND symbol, OR symbol etc.) to represent gates.

## **5. Different Logic Gates**

- **NOT:** Inverts the input.
- **NAND:** Outputs 0 when all inputs are 1.
- **AND:** Is implemented using NAND + NOT.
- Every gate is designed using this configuration of PMOS and NMOS to avoid short circuit. The network can either be in parallel or in series depending upon the need.
<p  align='center'>
    <image width=280 height=250 src='cmos.png'>
</p>
The network can either be in parallel or in series depending upon the need.

# *Lecture 2: Combinational logic*

## **1. Overview**

- Combinational Logic
- Boolean Algebra
- Representation, Manipulation and Minimization of circuits using boolean algebra
- Basic combinational logic blocks

## **2. Boolean Algebra**


- **Axioms:**
    - Closure Law
    - Commutative Law
    - Distributive Law
    - Associative Law
    - Identities etc.
<p  align='center'>
    <image width=300 height=400 src='table.png'>
</p>

- **Duality:** All the axioms have a dual form in which we swap `AND/OR` and `1/0`, and the axiom still holds.
- **Canonical Representations:**
    - **Sum of Products (SOP) Form:** OR of AND terms where the output is 1 i.e. minterms.
    - **Product of Sums (POS) Form:** AND of OR terms where the output is 0 i.e. maxterms.
- **Minimization:** The canonical forms can then be minimized using different axioms and laws.
    - **Example:** `A'BC + AB'C + ABC' + ABC` simplifies to `A + BC`.
    - **Reason for Simplification:** To reduce cost, latency and area.
  
## **3. Basic Combinational Logic Blocks**

### **Decoders**
- Decodes different input patterns to more number of bits.
- Decodes `N` inputs to `2^N` Inputs i.e. one-hot/one-cold decoding.
- **Applications:**
  - Memory address decoding in Memory Units
  - To decode the Instruction set in CPUs
  
### **Multiplexers**
- Basically a selector, selects different sources to share a single resource.
- Has `N` bit inputs and only 1 output.
- **Example:** A `16x1` Mux 
- **Applications:**
  - Data routing in ALUs
  - Every lookup table (logic function) can be represented as a multiplexer.

### **Adder**
- A one bit adder, inputs are `A B Cin` to generate `Sum` and `Cout`
- **Logic:**
  - `Sum = A ⊕ B`
  - `Cout = majority(A, B, Cin)`
- **Types:**
  - **Ripple Carry Adder(RLA):** Obtained by chaining N one bit full adders. Slower because carry propagates in series.<p  align='center'><image height=180 width=500 src='RLA.png'></p>
  - **Carry Look-Ahead Adder(CLA):** Calculates Carry in parallel using specialized logic instead of waiting for the previous carry out.

### **Programmable Logic Arrays(PLA)**
- Can implement any logic function using PLA by connecting(programmed) required inputs to an array of OR gates.
- **Example:** 4 input PLA can implement any 4 input combinational Logic function.

# ***Lecture 3: Sequential Logic***

## **1. Overview**
- **More Combinational Blocks:**
  - Comparator
  - ALU
  - Tristate Buffer
- **Sequential Logic**
- **Memory Design**
- **FSMs**
  
## **2. More Combinational Blocks**
### **Comparator**
- Uses bitwise XNORs to check if bits are equal then uses AND to confirm if all bits were equal or not

### **ALU (Arithemtic Logic Unit)**
- Used to perform Arithemic and Logic operations.
- Set of Adders, subtractors, different logic operations and other operations.
- Takes an instruction set to decide which operation to perform.
<p  align='center'>
    <image height=300 width=500 src='ALU.png'>
</p>

### **Tri-state Buffer**
- Acts as a switch, has 2 inputs A and E. If enable is high, the output is A else output is high impedence(Z) i.e. open circuit
- Used to implement Shared Buses.
<p  align='center'>
    <image height=300 width=500 src='TSB.png'>
</p>

## **2. Sequential Logic**

### **Storage Elements**
- **Cross-Coupled Gates**
  - The output has two stable and 1 metastable states
  - The output is not controlled i.e. Can't be setted manually

-  **R-S Latches**
   - Is Usually Active low
   - Has two inputs Set and Reset to either reset the output or set the output
   - Data is stored as Q
   - Both R = S = 0 results in a metastable state
  
- **Gated D-Latch**
  - Formed using S-R Latch by never letting S and R be 0 at the same time
  - Add two more NAND gates and an enable signal, and instead if two S-R inputs, one input D is used
  <p  align='center'>
      <image height=250 width=500 src='GDL.png'>
  </p>
- **D Flip-Flop**
  - Edge triggered - Stores input at positive or negative edge of the clock
  - Designed using two D Latches in series but the enable is complimented for the first one

### **State Dependent Systems**
- Depends on the previous state of the system but the output may or may not depend on the current input.
- **Examples:**
  - Traffic Signals
  - Sequence Detectors

### **Clock and Sync/Async Systems**

- **Clock:**
  - Peridoic Signal, remains 0 for half of the cycle and 1 for the remaining half.
  - Dictates State Transistions in a State Dependent System and synchronizes complex systems
- **Synchronous vs Asynchronous Systems:**
  - **Synchronous:** Dependent on the clock, easier to design.
  - **Asynchronous:** Independent of the clock, faster and more efficient but are prone to race conditions

## **3. Memory Design**

### **Memory Registers**
- An N bit register is formed using N D-flipflops in parallel
- Enable for all these flipflops are connected
  
### **Memory Array/Register File**
- An array of Registers.
- **Writing:** Requires Address Decoding to access the register in which the data is to be stored.
- **Reading:** Mux with address as selector is required to read the data.

## **4. Finite State Machines (FSMs)**

- Has finite states, as the name suggests
- Dependent on the previous states
- **Components:**
  - **State Register:** Stores the current state of the system
  - **Next-state logic:** We determine the next state using the current state and the current input
  - **Output Logic:** Combinational block that computes the output depending on the current state. 
- **Types:**
  - **Mealy FSM:** The output depends on the input and the current state.
  - **Moore FSM:** The output is only dependent on the current state.


# ***Lecture 4: Sequential Circuits(Continued)***

## **1. D-FlipFlops vs D-Latches**

|Feature      |D Flip-Flop    |D Latch         |
|-------------|---------------|----------------|
|Trigger      |Edge Triggered |Level Triggered |
|Usage in FSMs|      Yes      |     No         |

## **2. FSM Design**

- **State Transition Graph**
  - Circles Represent States
  - Arcs represent state transitions and the number on the arc represent the input that caused that state transition
  - Each state must have all possible state transitions
  - In Mealy, the output is shown with the state transition. In Moore, the output is represent in the state circles.
- **State Transition Table**
  - Table representing the Next state and output on all possible inputs sequences and current states
  - Written using the designed STG
- **State Encodings**
  - **Full Encoding:** Uses minimum possible number of bits. Minimum number of flipflops are used but the logic gets complex
    - **Example:** `00, 01, 10, 11`
  - **One Hot Encoding:** N states are  represented by N bits. For each state, only one unique bit is 1 and the rest a 0. Maximizes numbers of flip flops but logic is easier
    - **Example:** `001, 010, 100`
  - **Output Encoding:** Outputs are directly accessible from the states. Better for Moore only. Minimizes output logic

## **3. Mealy vs Moore FSM**

|Features|Mealy FSM|Moore FSM|
|--------|---------|---------|
|Next State logic|Depends on Input and current state| Also depends on Input and current state|
|Output|Depends on Input and current state|Depends only on Current state|
Timing|Output can change when input or current state changes|output changes only at clock edges(change of current state)|
|Number of states|Typically has Lesser states|Has Moore states|
## **4. FPGA Design Flow**

<p  align='center'>
      <image height=350 width=430 src='FPGA.png'>
  </p>

# ***Lecture 5:Hardware Descriptive Languages(HDLs) and Testbenches***

## **1. Overview**

### **Core Concepts**
- **Purpose:** We use special types of languages to describe hardwares. Such languages are called Hardware Descriptive languages - HDLs
- **Languages Used:**
  - Verilog (main focus of this course)
  - System Verilog
  - VHDL

## **2. Verilog Fundamentals**

### **Module Writing**
A Module must contains the following components:
- `module` keyword used to define the module
- Module Name
- Inputs - along with datatype and `input` keyword
- Outputs - along with datatype and `output` keyword
- `endmodule ` keyword at the end of module
```
module Example(
  input  wire a, b,    // Single-bit inputs
  input  wire [3:0] c, // 4-bit bus
  output reg  y        // Register output
);
  // Implementation of the Module
endmodule
```

### **Fundamental Data types**
- `wire`: Used for Combinational assignments. Value in computed continuously
- `reg`: Used for procedural assignments. Computes value only when inputs change and holds the value until the next input change. Similar to a register but not a register.
- `logic`: Can be wire and reg depending on the usage.

### **Number Representations**
<p align='center'><b><i>N'TXX...X</i></b></p>
  
- N - Number of bits
- T - Type of the number (hexa, binary etc.)
- X's - Actual Number

### **Parameters**
Act as Constant, once defined, their values can be changed
- **Global Parameters:** Defined outside of any Module. Are accessible in all the modules
```
parameter AN = 2'b00;
// Modules
```
- **Module Parameters:** Defined inside a module. Accessible only in that module.
```
module module_name(
    #(parameter AN = 2'b00)
    input a, b,
    output y
)
```

## **3. Modeling Techniques**

### **Structural Model**
- Includes Gate level Description of the circuit
- Lesser Abstraction
```
and g1(y, a, b) //Gate Instance
or g2(y, a, b) //Gate Instance
not g3(y, a) //Gate Instance

submodule submodule_name(.Y(y), .A(a), .B(b)) //Module Instance
```

### **Behavioural Model**
- More Abstraction
- We use Equations instead of gate instances
```
//Continuous Assignment
assign out = (a & b) | (c ^ d); //Equation
// Procedural block
always @(*) begin
  case (sel)
    2'b00: out = a;
    2'b01: out = b;
    default: out = 4'b0;
  endcase
end
```
## **4. Sequential Logic Implementation**

### **always Block**
- `always @ (sensitivity list)`
- This Block always executes whenever the condition in the sensitivity list is fulfilled
- Conditions in Sensitivity block can be
  - `posedge`/`negedge` - edge triggered
  - `always @ (enable)` - level triggered
  - `always @ (*)` - executes at any signal change used inside it
- Signals in `always` block must always be of type `reg`

### **D FlipFlop Implementation**
```
module flop(
    input logic d, clk, rst,
    output logic q
)

always @ (posedge clk)
    if (rst)
        q <= 0;
    else
        q <= d;
endmodule
```

### **Assignments**
- **Blocking Assignments:**
  - ` = `
  - Executes in Sequence
  - May result in race conditions in Sequential logic
  - Are executed in series, next assignment will not occur until previous assignment is complete
- **Non-Blocking Assignments:**
  - ` <= `
  - Executes in parallel
  - Doesn't result in race conditions
  - Evaluation of right hand side occurs when assignment appears but the actual assignment occurs always at the end of the block

## **5. FSM Implementation**

An FSM implementation must have 2 atleast 2 always blocks
- 1 for State Register
- 1 for Next State and Output Logic

**Example:** Moore Machine Template
```
parameter [1:0] IDLE = 2'b00,
                RUN  = 2'b01,
                DONE = 2'b10;

reg [1:0] state, next_state;
// State register
always @(posedge clk or posedge reset) begin
  if (reset) state <= IDLE;
  else state <= next_state;
end
// Next-state logic
always @(*) begin
  case (state)
    IDLE: next_state = start ? RUN : IDLE;
    RUN:  next_state = (count == MAX) ? DONE : RUN;
    DONE: next_state = IDLE;
  endcase
end
// Output logic
assign ready = (state == IDLE);
```
### **Design Guidelines**
1. **Hierarchy:**
    - Break into functional block - submodules
    - Verify submodules independently
1. **Style:**
    - Consistent naming (module_verb_noun)
    - One always block per state machine
    - No two assignments to the same signal in two different always blocks
2. **Synthesis:**
    - Avoid latches (ensure all cases covered) or use `default` case
    - Register all outputs for timing stability

# ***Lecture 6: Timing Specifications***
- **Sources of Delays:** Parasitic Capacitance and Resistances of the transistors, wire delays and Aging.
- Change in Temperature and supply voltage can change the delays.
- Different inputs result in different delays.
## **1. Combinational Circuit Timing**
- **Types of Delays:**
  - **Contamination Delay `t_cd`:** Minimum time the output takes to start changing after the input is changed.
  - **Propagation Delay `t_pd`:** Maximum time the output takes to settle down after the input is changed.
- **Longest-Shortest Path:**
  - **Longest Path:** Always calculated using the propagation delay of the path the most gates indicating the most time consumed to get the output.
  - **Shortest Path:** Always calculated using the contamination of the path with the least number of gates indicating the minimum time consumed to get a reaction in the circuit after input is changed.
- **Glitches:**
  - **Definition:** Unintended and unwanted outputs when certain input transitions happen.
  - **Cause:** Paths with different delays to compute the output.
  - **Example:**<p  align='center'><image height=300 width=350 src='glitch.png'></p>
  - Glitches can be ignored if we only care about long term steady state outputs (which is the case most of the time).

## **2. Sequential Circuit Timing**
- **Flip-Flop Timing Constraints**
  - **Setup/hold Time:**
    - **Setup Time `t_setup`:** A certain amount of time for which the input must not chane before the clock edge.
    - **Hold Time `t_hold`:** A certain amount of time for which the input must not change after the clock edge.
    - **Aperature time `t_a`:** `t_setup + t_hold`
  - **Clock-to-Q Delays:**
    - **Contamination Delay `t_ccq`:** Earliest time after the clock edge which output of flip-flop (Q) takes to start changing
    - **Propagation Delay `t_pcq`:** Latest time after the clock edge which output of flip-flop (Q) takes to stablize to a new value.
  - **Clock Skew:**
    - Difference in time of clocks reaching to different parts/flipflops in the circuit.
    - **Worst Cases:**
      - If clock arrives at latter FlipFlops first, the increase effective `t_setup` time - `t_setup,effective = t_setup + t_skew`.
        - `Tc > t_pcq + t_pd + t_setup + t_skew`
      - If clock arrives at the previous FlipFlops first, the increases effective `t_hold` time - `t_hold,effective = t_hold + t_skew`.
        - `t_hold < t_cd + t_ccq`
    - **Fix:** Use Clock Mesh Sythesis techniques (e.g. H-Tree Networks).
  - **Timing Constraints:**
    - Time Period of the clock - Tc : `Tc > t_pcq + t_pd + t_setup`
  - `t_hold < t_cd + t_ccq`
## **3. Timing Violations and Fixes**
- **Setup Time Violation:**
  - **Cause:** Combinational Logic between flipflips is too slow - Output isn't ready before setup time.
  - **Fix:** Increase Clock frequency, add buffers in the combinational Logic in shortest path to increase `t_cd`
- **Hold Time Violations:**
  - **Cause:** Combinational Logic between flipflops is too fast - Output is ready before hold time.
  - **Fix:** Add buffers to delay signals (no effect on t_setup).

## **4. Verification**
### **Functional Verification**
- **TestBenches:**

|TestBench|Input/Output Generation|Checking|
|---------|-----------------------|--------|
|**Simple**|<div align='center'>Manual|<div align='center'>Manual|
|**Self-Checking**|<div align='center'>Manual|<div align='center'>Automatic|
|**Automatic**|<div align='center'>Automatic|<div align='center'>Automatic|

<div align='center'>
  <image  height=150 width=380 src='tb.png'>
</div>

### **Basic TestBench Structure**
```
module testbench;
  // 1. Declare test signals
  reg clk, rst;
  wire [7:0] result;
  
  // 2. Instantiate DUT
  DesignUnderTest dut(.clk(clk), .reset(rst), .out(result));
  
  // 3. Clock generation
  always #5 clk = ~clk;
  
  // 4. Test sequence
  initial begin
    clk = 0; rst = 1;
    #20 rst = 0;
    #100 $finish;
  end
endmodule
```

## **Timing Verifications**
- **High level Verification:** Can model time using `#x` e.g. `#10`
- **Static Timing Analysis (STA):** Tools report critical paths and violations
- **Post-Synthesis:** Gate-level simulations with real timing data from cell libraries.

## **Good Design Principles**
- **Critical Path Design:** Minimize the maximum logic delays to increase performance i.e. maximize clock frequency.
- **Balanced Design:** Balance Maximum logic delay all around the circuit to avoid unintended problems.
- **Bread-and-Butter Design:** Optimize the design to handle common case but make sure it doesn't fail rare cases either
- The longest path delay determines the operating clock frequency of the circuit.

# ***References***

- [Lecture 1](https://www.youtube.com/watch?v=ubhxKNlOlRg&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=1)
- [Lecture 2](https://www.youtube.com/watch?v=U-4jmbm8inw&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=2)
- [Lecture 3](https://www.youtube.com/watch?v=smHJ1W7S-2Q&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=3)
- [Lecture 4](https://www.youtube.com/watch?v=KcP1ky8_U7w&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=6)
- [Lecture 5](https://www.youtube.com/watch?v=3Sqt0GIFPbc&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=7)
- [Lecture 6](https://www.youtube.com/watch?v=DBsDuQwpPsI&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=8)