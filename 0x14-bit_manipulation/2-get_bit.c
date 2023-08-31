#include "main.h"

/**
 * get_bit - returns the bit value at a given index
 * @n: int number
 * @index: bit index or position
 * Return: bit value or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n == 0)
		return (0);
	n = n >> index;
	if ((n & 1) != 0)
		return (1);
	return (0);
}
