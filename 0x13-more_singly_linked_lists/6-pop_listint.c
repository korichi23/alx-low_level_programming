#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint - deletes the head node of a listint_t
 *@head:pointer
 *@Return:the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == NULL)
		return (0);
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
