#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list
 * @head:pointer to list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temp = *head;

		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
