#include <stdio.h>

/**
 * main - finds and prints the first 100 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, a, b, c, d, x, y;

	a = 1;
	b = 2;

	printf("%lu", a);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}

	c = a / 1000000000;
	d = a % 1000000000;
	x = b / 1000000000;
	y = b % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", x + (y / 1000000000));
		printf("%lu", y % 1000000000);
		x = x + c;
		c = x - c;
		y = y + d;
		d = y - d;
	}

	printf("\n");

	return (0);
}
