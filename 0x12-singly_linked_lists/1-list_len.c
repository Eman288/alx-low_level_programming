#include "lists.h"
/**
*list_len - to print number of elements
*@h: the node
*Return: Always 0 (Success)
*/
size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h->next != NULL)
	{
		n++;
	       h = h->next;
	}
	n++;
	return (n);
}
