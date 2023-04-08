#include "main.h"

/**
 * clear_bit - function clears a bit at a given index
 * @n: the pointer to the bit
 * @index: is the bit position
 * Return: -1 for failure and 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
