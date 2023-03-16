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
	int i, k;

	char *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = nmemb * size;
	n = malloc(k);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		*(n + i) = 0;
	}
	return (n);
}
