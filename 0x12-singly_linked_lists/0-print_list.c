#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * print_list -  prints all the elements of a list_t list
 * @h:pointer par
 * Return:the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t n = 0;
	
	while (temp != NULL)
	{
		printf("[%ld] %s\n", strlen(h->str),
				h->str ? h->str : "(nil)");
		n++;
		temp = temp->next;
	}
	return (n);
}
