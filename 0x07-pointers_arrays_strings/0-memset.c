#include "main.h"
/**
*_memset - a function that fills memory with a constant byte.
*@s: a char
*@b: a char
*@n: an int
*Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *c;

	c = s;
	while (n != 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (c);
}
