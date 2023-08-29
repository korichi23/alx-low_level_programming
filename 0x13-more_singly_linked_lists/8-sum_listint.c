#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head:pointer to list
 * Return:int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
