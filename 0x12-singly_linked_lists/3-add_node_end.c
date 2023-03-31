#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node_end - a function that adds a new node at the end of a list_t list
*@head: the node
*@str: the string
*Return: Always 0 (Success)
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nod, *temp;

	unsigned int n;

	temp = *head;
	n = 0;
	while (str[n])
	{
		n++;
	}
	nod = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	nod->len = n;
	nod->str = strdup(str);
	nod->next = NULL;
	if (*head == NULL)
	{
		*head = nod;
		return (nod);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = nod;
	return (nod);
}
