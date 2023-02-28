#include "main.h"
/**
*print_rev - a function that prints a string
*@s: a char
*Return: Always 0 (Success)
*/
void print_rev(char *s)
{
	int n;

	char *m;

	for (n = 0; ; n++)
	{
		if (*s == '\0')
		{
			m = s;
			break;
		}
		s++;
	}
	m--;
	while (n != 0)
	{
		_putchar(*m--);
		n--;
	}
	_putchar('\n');
}
