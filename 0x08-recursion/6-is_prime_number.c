#include "main.h"
/**
 * _prime - entry
 * @n: input integer
 * @y: integer
 *
 * Return: Always 0
 */
int _prime(int n, int y)
{
	if (n % y == 0)
	{
		return (0);
	}
	if (n / 2 == y)
	{
		return (1);
	}
	return (_prime(n, y + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input integer
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (_prime(n, 2));
}
