#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VSquareRoot.h"
#include "stdio.h"
#include "time.h"

vluint64_t main_time = 0;
double sv_main_timestamp(){
    return main_time;
}

int main(int argc, char** argv){

    time_t* TIMER; 
    srand(time(TIMER));

    VSquareRoot* UUT = new VSquareRoot;
    VerilatedVcdC* tpf = new VerilatedVcdC;
    Verilated::traceEverOn(true);

    UUT->trace(tpf, 99);
    tpf->open("SquareRoot.vcd");

    for (int i = 0; i < 5; i++){
        UUT->x = double(rand()) / 1000.0;
        UUT->eval();
        tpf->dump(main_time);
        printf("Sqrt(%.10f) = %.15f\n", UUT->x, UUT->y);
        main_time += 5;
    }

    tpf->dump(main_time);
    tpf->close();
    delete tpf;
    delete UUT;
    return 0;
}