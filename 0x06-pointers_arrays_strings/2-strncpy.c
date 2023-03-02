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
	int m, k;

	char *s;

	s = dest;
	m = 0;
	k = n;
	while (*src != '\0' && n != 0)
	{
		*dest = *src;
		src++;
		dest++;
		m++;
		n--;
	}
	if (k >= m)
	{
		*dest = '\0';
	}
	return (s);
}
