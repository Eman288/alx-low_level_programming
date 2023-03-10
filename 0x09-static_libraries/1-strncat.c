#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strncat - Entry point
*@dest: a char
*@src: a char
*@n: a num
*Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
