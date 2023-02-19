#include <stdio.h>

/**
 * main - the entry point into our program
 * Description: This program prints the alphabet in lowecase,
 * followed by a newline
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

