#include "main.h"
/**
*_strncat - a function that concatenates two strings
*@dest: a char
*@src: a char
*@n: a num
*Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	char *s;

	s = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (n != 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (s);
}
