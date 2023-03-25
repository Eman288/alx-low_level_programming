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
	if (ac == 0 || av == NULL)
		return (NULL);
	int r;

	int i;

	int j;

	int m;

	char *s;

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
	s = malloc(sizeof(char) * r + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[m] = av[i][j];
			m++;
		}
		if (s[m] == '\0')
		{
			s[m] = '\n';
			m++;
	}
	}
	return (s);
}
