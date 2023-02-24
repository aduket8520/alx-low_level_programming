#include <stdio.h>


/**
 * main - the legendary FizzBuzz test
 * Description: a program that prints numbers from 1 to 100
 * for multiples of 3 print Fizz
 * for multiples of 5 print Buzz
 * for multiples of both print FizzBuzz
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
