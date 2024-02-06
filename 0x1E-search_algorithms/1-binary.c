#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value we search for
 * Return: the index for the element or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int s, l, m, i;

	if (array == NULL)
		return (-1);
	s = 0;
	l = (int) size - 1;
	while (l >= s)
	{
		printf("Searching in array:");
		for (i = s; i <= l; i++)
		{
			if (i != l)
			{
				printf(" %d,", array[i]);
			}
			else
			{
				printf(" %d\n", array[i]);
			}
		}
		m = (s + l) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			s = m + 1;
		else
			l = m - 1;
	}
	return (-1);
}
