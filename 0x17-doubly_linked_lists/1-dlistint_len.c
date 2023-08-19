#include "lists.h"
/**
*dlistint_len - a function that returns the number of elements
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
