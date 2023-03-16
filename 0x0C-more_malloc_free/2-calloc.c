#include <stdlib.h>
#include "main.h"
/**
*_calloc - a function that allocates memory for an array
*@nmemb: number of elements
*@size: the size of the elements
*Return: Always 0 (Success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *n, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(n + i) = '0';
	}
	return (n);
}
