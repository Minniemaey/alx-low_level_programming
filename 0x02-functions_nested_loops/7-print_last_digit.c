#include "main.h"
/**
 *print_last_digit - prints last digit of number
 *@i: integer value
 *x - last digit
 *
 *Return: Always 0
 */

int print_last_digit(int i)
{
	int x = i % 10;

	if (x >= 0)
	{
		x = x;
	}
	else if (x < 0)
	{
		x = (x * -1);
	}
	else if (i < 0)
	{
		x = (x * -1);
	}
	_putchar(x + '0');
	return (x);
}
