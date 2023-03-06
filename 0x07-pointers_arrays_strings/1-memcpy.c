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
	char *s;

	s = dest;
	while (*src != '\0' && n != 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (s);
}
