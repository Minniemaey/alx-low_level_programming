#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip a number
 * @n: first num
 * @m: second num
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m;
	unsigned int num = 0;

	while (bit > 0)
	{
		num++;
		bit &= (bit - 1);
	}
	return (num);
}
