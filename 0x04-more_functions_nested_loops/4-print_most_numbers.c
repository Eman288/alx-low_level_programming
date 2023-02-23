#include "main.h"
/**
*print_most_numbers - a function that prints the numbers
*Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		if (n == '2' || n == '4')
			continue;
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
