#include "main.h"
/**
 * set_bit - set to 1 at given index
 * @n:pointer to the number
 * index:the index
 * Return:1 for success -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8 || index < 0)
		return (-1);
	return(!!(*n |= 1L << index));
}
