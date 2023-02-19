#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * get_last_digit - this function returns the last digit of a number
 * @n: the number whose last digit to obtain
 * Description: use modulo division to get the last digit of a number
 * Return: an integer
 */
int get_last_digit(int n)
{
	return (n % 10);
}


/**
 * main - entry point into our program
 * Description: all the code must live inside main
 * Return: 0 if successful
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = get_last_digit(n);

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n,
				last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit);
	else
		printf("Error!\n");

	return (0);
}

