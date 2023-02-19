#include <stdio.h>

/**
 * main - the entry point into our program
 * Description: This program prints the alphabet in lowecase,
 * followed by a newline
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}

