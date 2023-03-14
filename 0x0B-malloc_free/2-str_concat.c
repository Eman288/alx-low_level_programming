#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*count - Entry point
*@s: a char
*Return: Always 0 (Success)
*/
int count(char *u)
{
	unsigned int m;

	m = 0;
	while (*u != '\0')
	{
		m++;
		u++;
	}
	return (m);
}
/**
*str_concat - a function that concatenates two strings.
*@s1: a char
*@s2: a char
*Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	unsigned int n;

	unsigned int i;

	unsigned int j;

	char *s;

	n = count(s1) + count(s2) + 1;
	s = (char *) malloc(n * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(s + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(s + i) = *(s2 + j);
		i++;
	}
	return (s);
}
