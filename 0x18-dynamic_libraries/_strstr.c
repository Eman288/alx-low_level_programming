#include "main.h"
/**
*_strstr - a function that locates a substring.
*@haystack: a char
*@needle: a char
*Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *n = haystack;

		char *m = needle;

		while (*n == *m && *m != '\0')
		{
			n++;
			m++;
		}
		if (*m == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
