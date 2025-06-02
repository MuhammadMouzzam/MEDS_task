`timescale 1ns/10ps

function real factorial(input int x);
    real fact;
    int i;
    begin
        fact = 1.0;
        i = 0;
        for (i = 2; i <= x; i++) begin
            fact *= i; end
        return fact;
    end
endfunction

function real exp(input real x);
    int i;
    real result;
    begin
        result = 0.0;
        i = 0;
        for(i = 0; i < 21; i++)
            result += (power(x,i)/factorial(i));
        return result;
    end
endfunction

function real power(input real x, input int pow);
    int i;
    real result;
    begin
        result = 1.0;
        i = 0;
        for (i = 0; i < pow; i++)
            result *= x;
        return result;
    end
endfunction

module Exponential(
    input real x,
    output real y
);
    always_comb begin
        y = exp(x);
    end
endmodule