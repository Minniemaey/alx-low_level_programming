#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block
 * @ptr: memory pointer
 * @old_size: old size in byte
 * @new_size: new size in byte
 *
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
		if (new_ptr == NULL)
			return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	new_ptr = malloc(new_size);
	return (new_ptr);
}
