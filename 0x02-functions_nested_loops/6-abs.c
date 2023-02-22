#include "main.h"


/**
 * _abs - compute the absolute value of an integer
 * Description: this function returns the absolute value of an integer
 * @n: the number whose absolute value to return
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
