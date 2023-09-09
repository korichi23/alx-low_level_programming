#include "main.h"
/**
 * clear_bit - reset at given index
 * @n:pointer to the number
 * @index:the index
 * Return:1 for success -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8 || index < 0)
		return (-1);
	if (*n & 1L << index)
		*n ^=  (1L << index);
	return (1);
}
