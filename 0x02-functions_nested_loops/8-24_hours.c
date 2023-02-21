#include "main.h"
/**
*jack_bauer - prints every minute of the day
*Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int n;

	int m;

	n = 0;
	m = 0;
	while
		(n < 24)
		{
			if (n < 10)
			{
				_putchar('0');
				_putchar(n);
			} else
			{
				_putchar(n);
			}
			_putchar(':');
			while (m < 60)
			{
				if (n < 10)
				{
					_putchar('0');
					_putchar(m);
				} else
				{
					_putchar(m);
				}
				m++;
			}
			_putchar('\n');
			m = 0;
			n++;
		}
}
