#include "main.h"

/**
 * print_last_digit - this function prints the last digit of an int
 * Description: this function prints the last digit of an int
 * @n: the integer whose last digit to return
 *
 * Return: the last digit of the integer n
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		_putchar(-last + '0');
		return (-last);
	}
	_putchar(last + '0');
	return (last);
}
