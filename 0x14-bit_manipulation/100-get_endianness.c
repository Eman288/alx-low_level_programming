#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 for big, 1 for little
*/

int get_endianness(void)
{
	unsigned long int num;

	num = 1;
	return (*(char *) & num);
}
