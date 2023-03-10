#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strncpy - Entry point
*@dest: a char
*@src: a char
*@n: a num
*Return: Always 0 (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
