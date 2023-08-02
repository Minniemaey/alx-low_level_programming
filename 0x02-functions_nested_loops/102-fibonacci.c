#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;
	long int num1 = 1, num2 = 2;

	for (num = 0; num < 50; num++)
	{
		if (num == 0)
		{
			printf("%ld", num1);
		}
		else if (num  == 1)
		{
			printf(", %ld", num2);
		}
		else
		{
			num2 += num1;
			num1 = num2 - num1;
			printf(", %ld", num2);
		}
	}

	printf("\n");
	return (0);
}
