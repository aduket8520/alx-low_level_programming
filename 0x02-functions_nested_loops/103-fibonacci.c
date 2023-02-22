#include <stdio.h>
#include <stdbool.h>

#define MAX	4000000


/**
 * main - the entry point into our program
 * Description: This program terms of the fibonacci series till 4,000,000
 * starting from 1
 *
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long j, k, res;
	float sum;

	j = 0;
	k = 1;
	while (true)
	{
		res = j + k;
		if (sum > MAX)
			break;

		if ((res % 2) == 0)
			sum += res;
		j = k;
		k = res;
	}
	printf("%.0f\n", sum);
	return (0);
}
