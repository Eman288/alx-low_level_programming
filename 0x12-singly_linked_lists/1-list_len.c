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
	while (h != NULL)
	{
		n++;
	       h = h->next;
	}
	return (n);
}
