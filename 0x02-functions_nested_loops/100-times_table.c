#include "main.h"


/**
 * print_times_table - print the n times table
 * Description: print the n times table
 * @n: the degree of the times table to print
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			res = i * j;
			_putchar(',');
			_putchar(' ');

			if (res < 10)
				_putchar(' ');
			if (res < 100)
				_putchar(' ');
			if (res >= 100)
			{
				_putchar((res / 100) + '0');
				_putchar(((res / 10) % 10) + '0');
			} else if (res >= 10 && res < 100)
			{
				_putchar((res / 10) + '0');
			}
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
