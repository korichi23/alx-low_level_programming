#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t
 *@head:pointer
 @Return:the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);
	listint_t *temp = *head;
	int n = temp->n;
	
	*head = (*head)->next;
	free(temp);
	return (n);
}
