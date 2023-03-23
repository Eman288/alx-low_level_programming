#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - a function that returns the sum of all its parameters.
*@n: the number of parameters
*Return: Always 0 (Success)
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int sum, i;

	sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
