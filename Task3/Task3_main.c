#include <stdio.h>

int isInTheArea();
int f();

void main()
{
	int t;
	scanf_s("%d", &t);
	switch (t)
	{
	case 1: return isInTheArea();
	case 2: return f();
	}
}

