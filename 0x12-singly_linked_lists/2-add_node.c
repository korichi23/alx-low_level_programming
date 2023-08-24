#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning
 * @head:the head of the list
 * @str:the string 
 * Return:new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = *head->next;
		*head = newNode;
	}
	return (newNode);
}	
