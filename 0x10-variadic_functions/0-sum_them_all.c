#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - a function that returns the sum of all its parameters.
*@n: the number of parameters
*Return: If n == 0 - 0.
*        Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
