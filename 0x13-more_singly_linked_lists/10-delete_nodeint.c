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
	listint_t *temp = *head, *temp1, *prev;
	unsigned int i = 0;

	if (!(*head) || !head)
		return (-1);
	if (index == 0)
	{
		temp1 = *head;
		(*head) = (*head)->next;
		free(temp1);
		return (1);
	}
	while (i < index && temp != NULL)
	{
		prev = temp;
		temp = (temp)->next;
		i++;
	}
	if (!(temp))
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (1);
}
