#include <stdio.h>

double x, res;

double f(double x)
{
    if (x > 3)
        res = -3*x+9;
    else
        res = (x*x*x)/(x*x+8);
    return res;
}

void main()
{
    scanf_s("%lf", &x);
    double a = f(x);
    printf("%lf\n", a);
}