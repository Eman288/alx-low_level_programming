#include "lists.h"
/**
*free_dlistint - free the list
*@head: the head of the list
*/
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
	       free(head->prev);
	}
	if (head != NULL)
		free(head);
}	
