#include "main.h"

/**
 * print_triangle - draw a triangle in the terminal
 * Description: >_<
 * @n: length of triangle
 *
 * Return: nothing
 */
void print_triangle(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = n - 1; j >= 0; j--)
				if (i < j)
					_putchar(' ');
				else
					_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
