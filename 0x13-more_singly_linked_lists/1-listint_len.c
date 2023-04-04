#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*listint_len - a function that prints number of elements
* @h: the head of the list
*Return: Always 0 (Success)
*/
size_t listint_len(const listint_t *h)
{
	int c;

	c = 0;
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
