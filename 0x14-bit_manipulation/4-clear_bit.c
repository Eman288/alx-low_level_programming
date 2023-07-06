#include "main.h"

/**
*clear_bit - a function that sets the value of a bit to 0 at a given index.
*@n: the number
*@index: the index
*Return: Always 0 (Success)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ~(1 << index) & *n;
	return (1);
}
