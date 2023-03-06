#include "main.h"
/**
*_strchr - a function that locates a character in a string.
*@s: a char
*@c: a char
*Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
