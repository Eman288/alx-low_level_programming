#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_memset - Entry point
*@s: a char
*@b: a char
*@n: a num
*Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
