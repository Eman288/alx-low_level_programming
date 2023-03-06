#include "main.h"
/**
*_strpbrk - a function that searches a string for any of a set of bytes.
*@s: a char
*@accept: a char
*Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	int n, m;

	for (n = 0; s[n] >= '\0'; n++)
	{
		for (m = 0; accept[m] >= '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				return (&s[n]);
			}
		}
	}
	return (0);
}
