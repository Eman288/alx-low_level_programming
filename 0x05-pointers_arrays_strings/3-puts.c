#include "main.h"
/**
*_puts -  a function that prints a string
*@str:a char
*Return: Always 0 (Success)
*/
void _puts(char *str)
{
	while (*str != '\0)
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
