#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node - to add an element at the the beginning of a list_t list
*@head: the node
*@str: the string
*Return: Always 0 (Success)
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nod;

	unsigned int n = 0;

	while (str[n])
	{
		n++;
	}
	nod = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	nod->str = strdup(str);
	nod->len = n;
	nod->next = (*head);
	(*head) = nod;
	return (*head);
}
