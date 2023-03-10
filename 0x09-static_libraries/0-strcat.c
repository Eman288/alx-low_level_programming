#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strcat - Entry point
*@dest: a char
*@src: a char
*Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
