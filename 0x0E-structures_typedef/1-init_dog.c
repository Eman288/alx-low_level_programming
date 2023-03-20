#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
*init_dog - initialize a variable of type struct dog
*@d: a struct
*@name: a char
*@age: a float
*@owner: a char
*Return: Always 0 (Success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
