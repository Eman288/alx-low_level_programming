#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - a function that allocates memory using malloc.
*@b: a num
*Return: Always 0 (Success)
*/
void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);
	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
