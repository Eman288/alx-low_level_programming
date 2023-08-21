#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_islower - a function
*@c: a cnum
*Return: Always 0 (Success)
*/
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
