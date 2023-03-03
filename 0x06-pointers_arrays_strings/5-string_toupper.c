#include "main.h"
/**
*string_toupper - a function that changes all lowercase letters of
*@n : a char
* Return: Always 0 (Success)
*/
char *string_toupper(char *n)
{
	char *s;

	s = n;
	while (*n != '\0')
	{
		if (*n >= 97 && *n <= 122)
		{
			*n -= 32;
		}
		n++;
	}
	return (s);
}
