#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 < 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	int sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
