#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(z + '0');
				continue;
			}
			_putchar(',');
			_putchar(' ');

			if (z >= 10)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}

