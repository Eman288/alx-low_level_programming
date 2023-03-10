#include "main.h"
/**
*_strpbrk - a function that searches a string for any of a set of bytes.
*@s: a char
*@accept: a char
*Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s != '\0')
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
