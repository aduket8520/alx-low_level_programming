#include <stdio.h>

/**
 * main - the entry point into our program
 * Description: This program prints all possible combinations of single digit
 * numbers
 * Return: 0 if successful
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
