#include "lists.h"
/**
*print_dlistint - a function that prints all the elements of a dlistint_t list
*@h: the head
*Return: Always 0 (Success)
*/
size_t print_dlistint(const dlistint_t *h)
{
	int m;

	m = 0;
	while (h != NULL)
	{
		m++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (m);
}
