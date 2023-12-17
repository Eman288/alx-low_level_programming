#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *  using the Binary search algorithm
 *  @array: the array
 *  @size: the size of the array
 *  @value: the value to search for
 *  Return: If value is not present in array or if array is NULL,
 *  the function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int s, e, i;

	if (array == NULL)
		return (-1);
	s = 0;
	e = (int)size - 1;
	while (e >= s)
	{
		printf("Searching in array");
		for (i = s; i <= e; i++)
		{
			if (i != e)
				printf(" %d,", array[i]);
			else
				printf(" %d\n", array[i]);
		}
		i = (e + s) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			e = i - 1;
		else
			s = i + 1;
	}
	return (-1);
}
