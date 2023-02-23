#include "main.h"
/**
*more_numbers - a function that prints 10 times the numbers
*Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int n;

	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				_putchar(m / 10 + '0');
			}
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
