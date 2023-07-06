#include "main.h"

/**
*flip_bits - function that returns the number of bits you would need to flip
*@n: the first num
*@m: the second num
*Return: Always 0 (Success)
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a;

	int i, c, b;

	unsigned long int num;

	b = 0;
	c = 0;
	a = (n | m) & (~(n) | ~(m));
	for (i = 63; i >= 0; i--)
	{
		num = a >> i;
		if (num & 1)
		{
			b++;
			c++;
		}
	}
	return (b / 2);
}
