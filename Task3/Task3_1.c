#include <stdio.h>
#include <stdbool.h>

void isInTheArea()
{
    double x, y; 
    scanf_s("%lf%lf", &x, &y);
    printf("%d\n", ((x <= 1) && (x >= 0) && (y <= 1) && (y >= -1)));
}

void f()
{
    double res,x;
    scanf_s("%lf", &x);
    if (x > 3)
        res = -3 * x + 9;
    else
        res = (x * x * x) / (x * x + 8);
    printf("%lf\n", res);
}