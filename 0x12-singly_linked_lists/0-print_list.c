#include "lists.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * list_t - struct for a linked list
 * @str: th string
 * @len: lenght
 * @next: the address of next node
 */
typedef struct list_t
{
	char *str;

	int len;

	struct list_t *next;
}list_t;
/**
*print_list - to print a linked list
*@h: the node
*Return: Always 0 (Success)
*/
size_t print_list(const list_t *h)
{
	int n;

	n = 0;
	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	n++;
	return (n);
}
