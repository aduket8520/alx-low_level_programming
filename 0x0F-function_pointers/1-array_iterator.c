#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  function given as a parameter on each element of an array.
 * @size: shows the sze of the array
 * @array: number of elements in the code
 * @action: shows what is to be performed on the funtion or array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
