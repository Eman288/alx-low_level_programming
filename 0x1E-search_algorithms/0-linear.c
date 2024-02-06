#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: the array we will search
 * @size: the size of the array
 * @value: the value we search for
 * Return: the index for the element or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; (size_t) i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
