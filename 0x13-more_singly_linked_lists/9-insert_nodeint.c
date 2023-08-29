#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head:pointer
 * @idx:int
 * @n:int
 * Return:pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);
	if (!node)
		return (NULL);
	if (idx == 0)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (node)
	}
	while (i < idx)
	{
		if (temp == NULL)
		{
			free(node);
			return (null);
		}
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = temp->next;
	temp->next = node;
	node->n = n;
	return (node);
}
