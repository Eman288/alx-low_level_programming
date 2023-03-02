#include "main.h"
/**
*_strncpy - a function that copies a string
*@dest: a char
*@src: a char
*@n: a num
*Return: Always 0 (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	char *s;

	s = src;
	m = 0;
	while (*src != '\0')
	{
		src++;
		m++;
	}
	m--;
	src = s;
	if (m < n)
	{
		s = dest;
		while (n != 0)
		{
			*dest = *src;
			n--;
			dest++;
			src++;
		}
	}
	else
	{
		s = dest;
		while (m != 0)
		{
			*dest = *src;
			m--;
			dest++;
			src++;
		}
		dest = '\0';
	}
	return (s);
}
