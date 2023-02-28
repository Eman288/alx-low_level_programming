#include "main.h"
/**
*rev_string - a function that reverses a string.
*@s: a char
*Return: Always 0 (Success)
*/
void rev_string(char *s)
{
	int n, k;

	char *m, *v, t;

	n = 0;
	m = s;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	v = s;
	v--;
	for (k = 0; k <= n / 2; k++)
	{
		t = *v;
		*v = *m;
		*m = t;
		m++;
		v--;
	}
}
