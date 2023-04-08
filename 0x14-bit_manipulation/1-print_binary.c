#include "main.h"
#include <stdio.h>
#include <stdbool.h>
/**
*print_binary - a function that prints the binary representation of a number.
*@n: the number
*Return: Always 0 (Success)
*/
void print_binary(unsigned long int n)
{
	bool flag;

	int m, v;

	m = 32768;
	flag  = false;
	v = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (m != 0)
	{
		v = n;
		if (v - m >= 0)
		{
			_putchar('1');
			flag = true;
			n -= m;
		}
		else if (flag == true)
		{
			_putchar('0');
		}
		m = m >> 1;
	}
}
