#include "main.h"
/**
*reverse_array - a function that reverses the content of an array of integers
*@a: a num
*@n: a num
*Return: Always 0 (Success)
*/
void reverse_array(int *a, int n)
{
	int m, t;

	for (m = 0; m < n / 2; m++)
	{
		t = a[m];
		a[m] = a[n - 1 - m];
		a[n - 1 - m] = t;
	}
}
