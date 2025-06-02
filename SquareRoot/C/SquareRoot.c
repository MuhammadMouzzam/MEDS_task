#include "stdio.h"
#include "math.h"
#include "stdlib.h"

long double SquareRoot(long double x){
    long double low, mid, high, error;

    if (x < 0){
        printf("Number less than 0, sqrt Non-Existant\n");
        return 0;
    }
    error = pow(10, -10);
    low = 0;
    high = x;
    if (x < 1){
        low = x; high = 1;
    }
    mid = (low+high)/2.0;
    while (!(fabs((mid*mid)-x) <= error)){
        mid = (low+high)/2.0;
        if (mid*mid > x){
            high = mid;
        } 
        else if (mid*mid < x){
            low = mid;
        }
    }
    return mid;
}

int main(){
    long double x;
    printf("Enter number: ");
    scanf("%Lf", &x);
    printf("SquareRoot(%.9Lf) = %.25Lf\n", x, SquareRoot(x));
}