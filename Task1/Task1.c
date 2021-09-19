#include <stdio.h>
#include <stdbool.h>

double x, y;

bool isInTheArea(double x, double y)
{
    return ((x <= 1) && (x >= 0) && (y <= 1) && (y >= -1));
}

void main()
{
    scanf_s("%lf%lf", &x, &y);
    bool a = isInTheArea(x, y);
    printf("%d\n", a);
}

