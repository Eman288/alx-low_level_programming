#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_nodeint - a function that adds a new node at the beginning of a listint_t
* @head: the head of the list
* @n: the node's value
*Return: Always 0 (Success)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if ((*head) == NULL)
	{
		node->next = NULL;
		(*head) = node;
	}
	else
	{
		node->next = (*head);
		(*head) = node;
	}
	return (*head);
}
