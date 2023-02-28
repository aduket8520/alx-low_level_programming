#include "main.h"


/**
 * rev_string - reverse a string
 *
 * @s: the string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (j = 0; j < i / 2; ++j)
	{
		c = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = c;
	}
}
