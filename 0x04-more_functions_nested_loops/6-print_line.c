#include "main.h"

/**
 * print_line - draw a line in the terminal
 * Description: >_<
 * @n: length of line
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
