#include "main.h"
/**
*times_table - prints the 9 times table, starting with 0.
*Return: Always 0 (Success)
*/
void times_table(void)
{
	int n, m, u, d, z;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			z = n * m;
			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			} else
			{
				if (m != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
