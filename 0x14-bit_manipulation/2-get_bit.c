#include "main.h"

/**
 * get_bit - this return the bit at a given index of the array
 * @n: the binary integer
 * @index: the position of the bit
 * Return: -1 for failure
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	tmp = 1UL << index;
	return ((n & tmp) ? 1 : 0);
}
