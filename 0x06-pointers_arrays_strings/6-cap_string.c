#include "main.h"
/**
*cap_string - a function that capitalizes all words of a string
*@n: a char
*Return: Always 0 (Success)
*/
char *cap_string(char *n)
{
	int m;

	char *s;

	s = n;
	m = 0;
	while (*n != '\0')
	{
		if (*n == '\n' || *n == '\t' || *n == ' ' || *n == ',' || *n == ';' ||
				*n == '.' || *n == '?' || *n == '!' || *n == '"' ||
				*n == '(' || *n == ')' || *n == '{' || *n == '}')
		{
			m = 0;
		}
		else if (m == 0)
		{
			if (*n >= 97 && *n <= 122)
			{
				*n -= 32;
			}
			m++;
		}
		n++;
	}
	return (s);
}
