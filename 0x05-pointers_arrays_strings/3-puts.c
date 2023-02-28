#include "main.h"

/**
 * _puts - a function that prints a string to stdout
 *
 * @s: the string to print
 *
 * Return: 0 if all goes well
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
