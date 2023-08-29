#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning 
 * @head:pointer
 * @n:int
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
