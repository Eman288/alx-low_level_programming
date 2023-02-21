#include "main.h"
/**
*print_alphabet_x10 - a function that prints 10 times the alphabet
*Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char a;

	int n;

	n = 0;

	a = 'a';
	while
		(n < 10)
		{
			while (a <= 'z')
			{
				_putchar(a);
				a++;
			}
			_putchar('\n');
			a = 'a';
			n++;
		}
}
