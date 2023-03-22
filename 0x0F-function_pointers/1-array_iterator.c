#include "function_pointers.h"
#include <stdio.h>
/**
*array_iterator - a function that executes a function given as a parameter
*@array: the array
*@size: the size
*@action: th function
*Return: Always 0 (Success)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
