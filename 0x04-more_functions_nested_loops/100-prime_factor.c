#include <stdio.h>
/**
 * main - prints the larget prime factor of 612852475143
 * Return: Always 0
 */
int main(void)
{
	long i;
	long val = 612852475143;

	for (i = 2; i < val; i++)
	{
		if (val % i == 0)
			val /= i;
	}
	printf("%li\n", val);
	return (0);
}
