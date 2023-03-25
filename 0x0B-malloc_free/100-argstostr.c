#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*argstostr - a function that concatenates all the arguments of your program.
*@ac: number of arguments
*@av: arguments
*Return: Always 0 (Success)
*/
char *argstostr(int ac, char **av)
{
	int r;

	int i;

	int j;

	int m;

	char *v;

	if (ac == 0 || av == NULL)
		return (NULL);
	r = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			r++;
		}
	}
	r += ac;
	m = 0;
	v = malloc(sizeof(char) * r + 1);
	if (v == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			v[m] = av[i][j];
			m++;
		}
		if (v[m] == '\0')
		{
			v[m] = '\n';
			m++;
	}
	}
	return (v);
}
