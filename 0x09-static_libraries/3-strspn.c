#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strspn - Entry point
*@s: a char
*@accept: a char
*Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
