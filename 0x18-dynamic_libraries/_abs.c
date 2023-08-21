#include "main.h"
/**
* _abs - computes the absolute value of an integer.
*@a: a num
* Return: Always 0 (Success)
*/
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	return (a * -1);
}
