#include "main.h"

/**
 * _isdigit - check for digits (0 through 9)
 * @c: The number to be cheecked
 * Return: for a character that will be a digit or 0 fot otherwise
 */

int _isdigit(int c)
{
	if (c >=48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
