#include "main.h"

/**
 * flip_bits - this function flips the bits
 * @n: the number to be flipped
 * @m: the number to be flipped to
 * Return: count - the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip;

	flip = n ^ m;
	while (flip != 0)
	{
		if (flip & 1)
			count++;
		flip >>= 1;
	}
	return (count);
}
