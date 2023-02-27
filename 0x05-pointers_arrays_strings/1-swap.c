#include "main.h"
/**
*swap_int - a function that swaps the values of two integers
*@a: a num
*@b: a num
*Return: Always 0 (Success)
*/
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
