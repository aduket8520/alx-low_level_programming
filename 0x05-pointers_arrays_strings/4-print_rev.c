#include "main.h"


/**
 * print_rev - print a string in reverse
 *
 * @s: the string to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
