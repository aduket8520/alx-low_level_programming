#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints an array of integers
 *
 * @a: the array
 * @n: the length of the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	printf("\n");
}
