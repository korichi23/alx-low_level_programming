#include "list.h"
/**
 * list_len -  returns the number of elements in  list_t
 * @h:the head
 * Return:size_t
 *
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
