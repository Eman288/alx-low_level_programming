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
	int n, m, s;

	s = 0;
	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size; m++)
		{
			if (n == m)
			{
				s += a[n][m];
			}
		}
	}
	printf("%d, ", s);
	m = 0;
	s = 0;
	for (n = 0; n < size; n++)
	{
		s += a[n][size - 1 - m];
		m++;
	}
	printf("%d", s);
}
