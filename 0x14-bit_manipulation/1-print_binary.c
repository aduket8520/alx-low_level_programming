#include "main.h"
#include <stdio.h>

/**
 * print_binary - this prints the binary for of a number
 * @n: this is the unsigned integer
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
