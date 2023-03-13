#include <stdio.h>
#include "main.h"
/**
*create_array - a function that creates an array of chars
*@size: a num
*@c: a char
*Return: Always 0 (Success)
*/
char *create_array(unsigned int size, char c)
{
	int i;

	char *p, *s;

	p = malloc(size * sizeof(char));
	s = p;
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (size != 0)
	{
		p[i] = c;
		i++;
		size--;
	}
	return (s);
}
