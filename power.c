#include "myMath.h"

#define EXP 2.71828

double Exponent(int x){
    return Power(EXP,x);
}

double Power(double x, int y){
    int numberOfIterations;
    //make the y into absolute form, positive number
    numberOfIterations = y<0 ? y*(-1) : y;
    double sum=x;
    //multiply the value in itself
    for (int i = 1; i < numberOfIterations; i++)
    {
        sum = sum*x;
    }
    //if y<0 the power is supposed to be a fractional
    return y<0? 1/sum: sum;
}


