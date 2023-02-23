#include "main.h"
/**
*print_numbers - a function that prints the numbers
*Return: Always 0 (Success)
*/
void print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
