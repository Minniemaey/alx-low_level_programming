#include "main.h"

/**
 * set_bit - sets bit value to 1 at a given index
 * @n: pointer
 * @index: bit index or position
 * Return: 1 on success, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
