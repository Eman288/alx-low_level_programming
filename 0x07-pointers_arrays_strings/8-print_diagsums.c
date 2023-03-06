#include "main.h"
#include <stdio.h>
/**
*print_diagsums - a function that prints the sum of the two diagonal
*@a: a num
*@size: a num
*Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
	int s1, s2, n;

	s1 = 0;
	s2 = 0;
	for (n = 0; n < size; n++)
	{
		s1 += a[n * size + n];
	}
	for (n = size - 1; n >= 0; n--)
	{
		s2 += a[n * size + (size - y - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
