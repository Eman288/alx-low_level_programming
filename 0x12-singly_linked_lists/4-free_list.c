#include <stdlib.h>
#include "lists.h"
/**
*free_list - free a linked list
* @head: the first node
*Return: Always 0 (Success)
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
