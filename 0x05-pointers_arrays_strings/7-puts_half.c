#include "main.h"

/**
 * puts_half - print the second half of a string
 *
 * @str: the string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	i = i - (i / 2);
	for (j = i; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
