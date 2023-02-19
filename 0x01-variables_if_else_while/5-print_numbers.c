#include <stdio.h>

/**
 * main - the entry point into our program
 * Description: This program prints all the single digit numbers of base
 * 10 starting from 0 followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}

