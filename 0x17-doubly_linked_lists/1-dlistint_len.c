#include "lists.h"
/**
*print_dlistint - a function that prints all the elements of a dlistint_t list
*@h: the head
*Return: Always 0 (Success)
*/
size_t dlistint_len(const dlistint_t *h)
{
	int m;

	m = 0;
	while (h != NULL)
	{
		m++;
		h = h->next;
	}
	return (m);
}
