#include "main.h"
/**
*print_alphabet - a function that prints the alphabet,followed by a new line.
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
