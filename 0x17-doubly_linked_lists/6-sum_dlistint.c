#include "lists.h"
/**
*sum_dlistint - a function that returns the sum of all the data
*@head: the head of the list
*Return: Always 0 (Success)
*/
int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;
	if (head != NULL)
	{
		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}
	return (s);
}
