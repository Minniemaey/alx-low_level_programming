#include "main.h"
/**
 * _abs - prints the absolute value of a number
 * @i: number to check
 *
 * Return: Always abs value
 */
int _abs(int i)
{

	if (i < 0)
	{
		return (i * -1);
	}
	else if (i >= 0)
	{
		return (i);
	}
	return (0);
}
