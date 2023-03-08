#include "main.h"
/**
*_print_rev_recursion - a string in reverse.
*@s: a char
*Return: Always 0 (Success)
*/
void _print_rev_recursion(char *s)
{
	s++;
	if (*s != '\0')
	{
		_print_rev_recursion(s);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
