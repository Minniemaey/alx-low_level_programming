#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * @size: array size
 * @c: initializing char
 *
 * Return: array pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array_a;
	unsigned int a;

	if (size == 0)
		return (NULL);
	{
		array_a = malloc(sizeof(c) * size);
		if (array_a == NULL)
			return (NULL);
		for (a = 0; a < size; a++)
			array_a[a] = c;
	}
	return (array_a);
}
