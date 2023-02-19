#include <stdio.h>

/**
 * main - the entry point into our program
 * Description: This program prints the numbers of base 16 in lowercase,
 * followed by a newline
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'a';
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

