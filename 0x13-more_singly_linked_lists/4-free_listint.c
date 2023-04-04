#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include "lists.h"
/**
*free_listint - free a linked list
* @head: the first node
*Return: Always 0 (Success)
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
