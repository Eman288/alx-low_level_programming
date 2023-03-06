#include "main.h"
/**
*_memcpy - a function that copies memory area.
*@dest: a char
*@src: a char
*@n: a num
*Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s, m;

	m = 0;
	s = n;
	for (; m < s; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
