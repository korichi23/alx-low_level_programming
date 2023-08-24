#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list 
 * @head:the head
 * Return:void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
