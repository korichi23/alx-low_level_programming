#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head:pointer
 * @n:int
 * Return:address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if(!(*head))
		*head = node;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
