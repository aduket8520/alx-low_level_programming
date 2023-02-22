#include "main.h"
#define HRS	24
#define MINS	60


/**
 * jack_bauer - print every minute in the day of jack bauer
 * Description: this function prints every minute from 00:00 to 23:59
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < HRS; i++)
		for (j = 0; j < MINS; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
}
