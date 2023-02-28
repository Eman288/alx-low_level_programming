#include "main.h"
#include <stdio.h>
/**
*print_array - a function that prints n elements of an array
*@a: a num
*@n: anum
*Return: Always 0 (Success)
*/
void print_array(int *a, int n)
{
	int m;

	if (n < 0)
	{
		n *= -1;
	}
	for (m = 0; m < n; m++)
	{
		if (m != n - 1 && m != 0)
		{
			printf(" %d,", *a);
		}
		else if (m != 0)
		{
			printf(" %d\n", *a);
		}
		else
		{
			printf("%d,", *a);
		}
		a++;
	}
}
