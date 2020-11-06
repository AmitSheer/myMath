#include "myMath.h"

#define EXP 2.2178281828

double Exponent(int x){
    return Power(EXP,x);
}

double Power(double x, int y){
    int numberOfIterations;
    numberOfIterations = y<0 ? y*(-1) : y;
    double sum=x;
    for (int i = 1; i < numberOfIterations; i++)
    {
        sum = sum*x;
    }
    return y<0? 1/sum: sum;
}


