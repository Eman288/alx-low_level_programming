#include "main.h"
/**
*_strchr - a function that locates a character in a string.
*@s: a char
*@c: a char
*Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	int n;

	n = 0;
	for (; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
		{
			return (&s[n]);
		}
	}
	return (0);
}
