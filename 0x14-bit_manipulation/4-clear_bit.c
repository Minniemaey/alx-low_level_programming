#include "main.h"

/**
 * clear_bit - sets bit value to 0 at a given index
 * @n: pointer
 * @index: bit  position
 * Return: 1 on success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
