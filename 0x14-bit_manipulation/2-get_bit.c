#include "main.h"

/**
*get_bit - a function that returns the value of a bit at a given index
*@n: the number
*@index: the index
*Return: Always 0 (Success)
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int s[63];

	long int m, i;

	i = 0;
	while (n != 0)
	{
		m = n;
		n = n >> 1;
		s[i] = m - (n * 2);
		i++;
	}
	i--;
	if (index > i || index > 63)
	{
		return (-1);
	}
	return (s[index]);
}
