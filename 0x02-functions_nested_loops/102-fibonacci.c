#include <stdio.h>


/**
 * main - the entry point into our program
 * Description: This program prints 50 terms of the fibonacci series,
 * starting from 1
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	unsigned long j, k, res;

	j = 0;
	k = 1;
	for (i = 0; i < 50; i++)
	{
		res = j + k;
		printf("%lu", res);
		j = k;
		k = res;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
