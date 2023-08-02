#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array elements
 * @size: byte size
 *
 * Return: NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int a = 0, array = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = (nmemb * size);
	buffer = malloc(array);
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < array; a++)
	{
		buffer[a] = 0;
	}
	return (buffer);
}
