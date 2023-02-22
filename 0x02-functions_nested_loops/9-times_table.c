#include "main.h"
/**
*times_table - prints the 9 times table, starting with 0.
*Return: Always 0 (Success)
*/
void times_table(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			_putchar(n * m);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
