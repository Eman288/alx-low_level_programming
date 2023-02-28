#include "main.h"
/**
*puts2 -  a function that prints every other character
*@str: a char
*Return: Always 0 (Success)
*/
void puts2(char *str)
{
	int n, k;

	char *m;

	m = str;
	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	for (k = 0; k < n; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(*m);
		}
		m++;
	}
}
