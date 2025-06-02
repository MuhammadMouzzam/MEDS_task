#include "stdio.h"
#include "math.h"

long double factorial(long double num){
    long double fact = 1;
    for (int i = 2; i < num+1; i++){ fact *= i; }
    return fact;
}

long double Exponential(double x){
    long double result = 0;
    for (int i = 0; i < x+100; i++){
        result += (pow(x, i)/factorial(i));
    }
    return result;
}

int main(){
    double x = 66;
    long double exp = Exponential(x);
    printf("x = %f\nExp(x) = %Lf\n", x, exp);
    return 0;
}