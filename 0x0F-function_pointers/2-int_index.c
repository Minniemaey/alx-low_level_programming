#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: array size
 * @cmp: function pointer
 *
 * Return: index of element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}
