#include "lists.h"
/**
*delete_dnodeint_at_index - a function that deletes the node at index
*@head: the head of the node
*@index: the index of the node we will delete
*Return: Always 0 (Success)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int m;

	dlistint_t *temp;

	m = 0;
	temp = *head;
	while (m != index && temp != NULL)
	{
		temp = temp->next;
		m++;
	}
	if (temp != NULL)
	{
		if (temp->next != NULL)
			temp->prev->next = temp->next;
		else
			temp->prev->next = NULL;
		if (temp->prev != NULL)
		{
			temp->next->prev = temp->prev;
			*head = (*head)->next;
		}
		else
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
