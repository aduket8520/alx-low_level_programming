#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Description: It's up there
 *
 * Return: nothing
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
