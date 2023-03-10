#include "main.h"
#include <unistd.h>

/**
*_putchar -  a function i think
*@a: a char
*Return: Always 0 (Success)
*/

int _putchar(char a)
{
	return (write(1, &a, 1));
}
