#include <stdlib.h>
#include "main.h"
/**
*cal_size - Entry point
*@s: a char
*Return: Always 0 (Success)
*/
int cal_size(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
/**
*string_nconcat - a function that concatenates two strings.
*@s1: a char
*@s2: a char
*@n: a num
*Return: Always 0 (Success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int m, i;

	char *s, *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = cal_size(s1);
	m = m + n;
	s = malloc(m + 1);
	if (s == NULL)
		return (NULL);
	c = s;
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*s  = *(s1 + i);
		s++;
	}
	i = 0;
	while (n != 0 && *(s2 + i) != '\0')
	{
		*s = *(s2 + i);
		i++;
		s++;
		n--;
	}
	*s = '\0';
	return (c);
}
