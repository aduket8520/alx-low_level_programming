#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to undigned int
 * @b: string to convert to the int
 * Return: 0 for failure
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	if (!b)
		return (result);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
			result = (result << 1) | 0;
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
		i++;
	}
	return (result);
}
