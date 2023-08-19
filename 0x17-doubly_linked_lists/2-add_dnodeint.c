#include "lists.h"

/**
*add_dnodeint - a function that adds a new node at the beginning
*@head: the head node
*@n: the value of the new node
*Return: Always 0 (Success)
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *headc;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	headc = *head;
	if (headc != NULL)
	{
		while (headc->prev != NULL)
		{
			headc = headc->prev;
		}
	}
	new->prev = NULL;
	new->n = n;
	new->next = headc;
	if (headc != NULL)
	{
		headc->prev = new;
	}
	*head = new;
	return (new);
}
