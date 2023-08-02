#include "main.h"
/**
 * _numsqrt - entry
 * @n: integer
 * @y: sqrt integer
 * Return: Always 0
 */
int _numsqrt(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	if ((y * y) > n)
	{
		return (-1);
	}
	return (_numsqrt(n, y + 1));
}


/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_numsqrt(n, 1));
}
