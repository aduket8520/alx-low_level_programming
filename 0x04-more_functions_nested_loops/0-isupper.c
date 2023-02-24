#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @x: The number to be checked
 * Return: 1 for upper and 0 for otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 96)
	{
		return (1);
	}
	return (0);
}
