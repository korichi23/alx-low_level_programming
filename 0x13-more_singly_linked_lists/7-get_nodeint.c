#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node 
 * @head:pointer
 * @index:int
 * Return:pointer to the node 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
