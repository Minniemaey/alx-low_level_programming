#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter
 * @array: array.
 * @size: array size
 * @action: function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
}
