#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end
 * @head:the head of the list
 * @str:the string
 * Return:the node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	if (!temp)
		*head = node;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	node->next = NULL;
	return (node);
}
