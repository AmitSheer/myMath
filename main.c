#include <stdio.h>
#include "myMath.h"

int main() {
    double value;
    printf("Please inset a real number: ");
    scanf("%lf", &value);
    //printf("\n%.4lf", value);
    double x = sub(add(Exponent(value), Power(value,3)),2);
    printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %.4lf is:%.4lf\n", value ,x);
    x = add(mul(3,value),mul(2,Power(value,2)));
    printf("The value of f(𝑥) = 3x + 2x^2 at the point %.4lf is:%.4lf\n", value ,x);
    x = (double) sub(div(mul(4,Power(value,3)),5),mul(2,value));
    printf("The value of f(𝑥) = (4x^3)/5-2x at the point %.4lf is:%.4lf\n", value ,x);

    return 0;
}