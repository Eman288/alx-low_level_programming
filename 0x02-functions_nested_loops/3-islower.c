#include "main.h"
/**
* _islower - a function that checks for lowercase character.
*Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}
}
