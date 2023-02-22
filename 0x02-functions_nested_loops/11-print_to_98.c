#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - print all the natural numbers to 98
 * @n: the starting point
 * Description: print all the natural numbers to 98
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	else
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	printf("%d\n", 98);
}
