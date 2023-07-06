#include "main.h"
/**
*binary_to_uint - a function that converts a binary number to an unsigned int
*@b: a char
*Return: Always 0 (Success)
*/
unsigned int binary_to_uint(const char *b)
{
	int counter;

	unsigned int n;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		n = 0;
		for (counter = 0; b[counter]; counter++)
		{
			if (b[counter] != '0' && b[counter] != '1')
			{
				return (0);
			}
			n = n * 2 + (b[counter] - '0');
		}
	}
	return (n);
}
