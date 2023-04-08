#include "main.h"
#include <stdio.h>
/**
*binary_to_uint - a function that converts a binary number to an unsigned int
*@b: string of 1's and 0's
*Return: Always 0 (Success)
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int m;

	int i;

	m = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		m = m * 2 + (b[i] - '0');
	}
	return (m);
}
