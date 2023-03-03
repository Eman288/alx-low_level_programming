#include "main.h"
/**
*leet - a function that encodes a string into 1337
*@n: a char
*Return: Always 0 (Success)
*/
char *leet(char *n)
{
	char s[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};

	char x[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	int m;

	char *k;

	k = n;
	while (*n != '\0')
	{
		for (m = 0; m < 10; m++)
		{
			if (*n == s[m])
			{
				*n = x[m];
			}
		}
		n++;
	}
	return (k);
}
