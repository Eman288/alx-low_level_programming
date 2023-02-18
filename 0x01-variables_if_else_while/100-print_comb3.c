#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	char n;

	c = '0';
	n = '1';
	while
		(c < '9') {
			while 
				(n < 10) {
					putchar(c);
					putchar(n);
					n++;
					putchar('\n');
				}
			c++;
			n = c + 1;
		}
	putchar('\n');
	return (0);
}
