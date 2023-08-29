#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head:pointer
 * @index:int
 * Return:int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	while (i < index)
	{
		*head = (*head)->next;
		i++;
	}
	if (!(*head))
		return (-1);
	temp = *head;
	free(temp);
	*head = *head->next;
	return (1);
}
