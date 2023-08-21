#include "main.h"
/**
* _isupper - a function that checks for uppercase character.
* @c: a num
*Return: Always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
