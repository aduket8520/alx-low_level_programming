#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14, 10 times
 * Description: It's up there
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c / 10 > 0)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
