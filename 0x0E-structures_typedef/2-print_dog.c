#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - a function that prints a struct dog
*@d: a struct
*Return: Always 0 (Success)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: nil");
	}
	else
	{
		printf("Name: %s", d->name);
	}
	if (d->age < 0)
	{
		printf("Age: nil");
	}
	else
	{
		printf("Age: %d", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: nil");
	}
	else
	{
		printf("Owner: %s", d->owner);
	}
}
