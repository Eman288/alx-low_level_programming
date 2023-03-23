#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - a function that prints strings, followed by a new line.
*@separator: a char
*@n: a num
*Return: Always 0 (Success)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int m;

	char *s;

	va_start(ap, n);
	for (m = 0; m < n; m++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (m != (n - 1) && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
