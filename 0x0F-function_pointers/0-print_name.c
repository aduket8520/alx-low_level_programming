#ifdef FUNCTION_POINTERS_H
#include "function_pointers.h"
#endif
#include <stdio.h>

/**
 * print_name - print the user name
 * @name: what the user types
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
