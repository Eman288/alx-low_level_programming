#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: the array we will search at
 * @size: the size of the array
 * @value: the value we want to search for
 * Return: the index of the element or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int i, j, step;

	if (array == NULL)
		return (-1);
	step = sqrt(size) ;
	for (i = 0; (size_t) i < size; i += step)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i + step] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + step);
			for (j = i; j <= i + step; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", i - step, i);
	for (j = i - step; (size_t) j < size && j <= i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
