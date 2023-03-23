#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - a function that prints numbers, followed by a new line.
*@separator: the char
*@n: the number of parameters
*Return: Always 0 (Success)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && m != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
