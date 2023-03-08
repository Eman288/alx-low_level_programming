#include "main.h"
/**
*_print_rev_recursion - a string in reverse.
*@s: a char
*Return: Always 0 (Success)
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		return ('\0');
	}
	_putchar(*s);
}
