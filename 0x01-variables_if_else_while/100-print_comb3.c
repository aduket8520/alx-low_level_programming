#include <stdio.h>

/**
 * main - the entry point into our program
 * Description: This program prints the alphabet in lowecase,
 * followed by a newline
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (!(i == 56 && j == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

