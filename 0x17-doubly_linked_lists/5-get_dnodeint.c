#include "lists.h"
/**
*get_dnodeint_at_index - a function that returns the nth node
*@head: the head
*@index: the index of the wanted node
*Return: Always 0 (Success)
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m;

	m = 0;
	while (m != index && head != NULL)
	{
		head = head->next;
		m++;
	}
	if (head != NULL)
	{
		return (head);
	}
	return (NULL);
}
