#include "main.h"

/**
 * puts2 - a function that prints every other character of a string to stdout
 *
 * @s: the string to print
 *
 * Return: 0 if all goes well
 */
void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(s[i]);
	_putchar('\n');
}
