#include "main.h"

/**
 * set_bit - this function sets all the bits at an inde
 * @index: is the bit position
 * @n: pointer to the bit
 * Return: -1 for failure and 1 for success
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);

	return (1);
}
