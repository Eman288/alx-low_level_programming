#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_nodeint_end - a function that adds a new node at the end of a listint_t
* @head: the head of the list
* @n: the node's value
*Return: Always 0 (Success)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	listint_t *temp;

	temp = (*head);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if ((*head) == NULL)
	{
		node->next = NULL;
		(*head) = node;
		return (node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	node->next = NULL;
	temp->next = node;
	return (node);
}
