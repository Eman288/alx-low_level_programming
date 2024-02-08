#include "search_algos.h"
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
	int i, j;

	if (array == NULL)
		return (-1);
	for (i = 0; (size_t) i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] > value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - 3, i);
			for (j = i - 3; j <= i; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
		else
		{
			i += 3;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", i - 3, i);
	for (j = i - 3; (size_t) j < size && j <= i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
