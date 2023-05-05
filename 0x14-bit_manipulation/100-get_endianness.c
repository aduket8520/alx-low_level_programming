#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return 0 for value of endianess 0 for success
 */
int get_endianness(void)
{
	int end = 1;

	while (end)
	{
		char *str = (char *)&end;

		return (*str == 1); /*this is the return value for endianess*/
	}
	return (0);
}
