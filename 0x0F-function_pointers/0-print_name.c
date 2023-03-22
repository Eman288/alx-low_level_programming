#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - a function that prints a name.
*@name: a char
*@f: a function
*Return: Always 0 (Success)
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
