#include "main.h"
/**
*puts_half - a function that prints half of a string
*@str: a char
*Return: Always 0 (Success)
*/
void puts_half(char *str)
{
	int n, k;

	char *c;

	c = str;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	for (k = 0; k < n / 2; k++)
	{
		c++;
	}
	c--;
	for (k = n / 2; *c != '\0'; k++)
	{
		_putchar(*c++);
	}
	_putchar('\n');
}
