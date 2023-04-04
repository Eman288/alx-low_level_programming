#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_listint - a function that prints all the elements of a list
* @h: the head of the list
*Return: Always 0 (Success)
*/
size_t print_listint(const listint_t *h)
{
	int c;

	c = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
