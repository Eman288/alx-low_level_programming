#include <stdlib.h>
#include "main.h"
/**
*array_range - a function that creates an array of integers.
*@min: a num
*@max: a num
*Return: Always 0 (Success)
*/
int *array_range(int min, int max)
{
	int *m, i, j;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(int));
	if (m == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		*(m + j) = i;
		j++;
	}
	return (m);
}
