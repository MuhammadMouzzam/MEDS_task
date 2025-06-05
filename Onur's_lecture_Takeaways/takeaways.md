<p align='center'>
    <image width=300 height=300 src='Meds.png'>
    <h1 align='center' style='italic'><i>Key Takeaways: Digital Desgin and Computer Architecture (from Onur's Lectures)</i>
</p>



# *Lecture 1: Introduction*
---
## **1. Overview**
---
- **Working of Modern computers (From Ground Up):** How they are actually implemented on hardware (Logic gates → Transistors → MicroProcessors)
- **Goals** 
    - Understand the Basics.
    - Learn how to optimize a system.

## **2. Computer Architecture Basics**
---
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
---
- **Heterogeneity:** A combination of different Computational Units/Processors to get optimal performance.
- **System Flexibity:**
    - Flexible/General Purpose Systems: Good at General Purpose use, but are less efficient.
    - Inflexible/Special Purpose System: Designed for only specific tasks and give high performance.
  
## **4. Transistors as Building Blocks**
---
- **MOS Transistors:** Acts as Switches. In NMOS, a high voltage at gate means the switch is closed and vice versa, in PMOS, a high voltage at gates means the circuit is open.
- **CMOS Technology:** Uses combination of NMOS and PMOS to implement different gates like NOT, AND etc
<p  align='center'>
    <image width=200 height=200 src='not.png'>
    <p align='center'><i>CMOS NOT gate</i>
</p>
NOT and NAND are the simplest gates we can design from CMOS and we mostly combine these to implement other gates.

For represetation, instead of using actual transistor equivalent diagrams for a gate, we'll use abstracted models/symbols (AND symbol, OR symbol etc.) to represent gates.

## **5. Different Logic Gates**
---
- **NOT:** Inverts the input.
- **NAND:** Outputs 0 when all inputs are 1.
- **AND:** Is implemented using NAND + NOT.
- Every gate is designed using this configuration of PMOS and NMOS to avoid short circuit. The network can either be in parallel or in series depending upon the need.
<p  align='center'>
    <image width=280 height=250 src='cmos.png'>
</p>
The network can either be in parallel or in series depending upon the need.

# *Lecture 2: Combinational logic*
---
## **1. Overview**
---
- Combinational Logic
- Boolean Algebra
- Representation, Manipulation and Minimization of circuits using boolean algebra
- Basic combinational logic blocks

## **2. Boolean Algebra**
---

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
---
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
---
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
---
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
---
### **Memory Registers**
- An N bit register is formed using N D-flipflops in parallel
- Enable for all these flipflops are connected
  
### **Memory Array/Register File**
- An array of Registers.
- **Writing:** Requires Address Decoding to access the register in which the data is to be stored.
- **Reading:** Mux with address as selector is required to read the data.

## **4. Finite State Machines (FSMs)**
---
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
## **D-FlipFlops vs D-Latches**
|Feature      |D Flip-Flop    |D Latch         |
|-------------|---------------|----------------|
|Trigger      |Edge Triggered |Level Triggered |
|Usage in FSMs|      Yes      |     No         |

## **FSM Design**
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
  
|Features|Mealy FSM|Moore FSM|
|--------|---------|---------|
|Next State logic|Depends on Input and current state| Also depends on Input and current state|
|Output|Depends on Input and current state|Depends only on Current state|
Timing|Output can change when input or current state changes|output changes only at clock edges(change of current state)|
|Number of states|Typically has Lesser states|Has Moore states|
## **FPGA Design Flow**
<p  align='center'>
      <image height=350 width=430 src='FPGA.png'>
  </p>

# ***Lecture 5:***



