#include "main.h"

/**
 * print_square - draw a square in the terminal
 * Description: >_<
 * @n: length of side
 *
 * Return: nothing
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n; ++j)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
