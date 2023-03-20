#include "dog.h"
#include <stdlib.h>
/**
*_strlen - count a string
*@str: the string
*Return: Always 0 (Success)
*/

int _strlen(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}
/**
*_strcopy - copy a string
*@dest: a string
*@src: a string
*Return: Always 0 (Success)
*/
char *_strcopy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
/**
*new_dog - a function that creates a new dog.
*@name: a char
*@age: a num
*@owner: a char
*Return: Always 0 (Success)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d->name);
		return (NULL);
	}
	d->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->owner);
		return (NULL);
	}
	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);
	return (d);
}
