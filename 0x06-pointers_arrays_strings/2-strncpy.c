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

	s = dest;
	m = 0;
	while (*src != '\0' && m < n)
	{
		*dest = *src;
		src++;
		dest++;
		m++;
	}
	while (m < n)
	{
		*dest = '\0';
		dest++;
		m++;
	}
	return (s);
}
