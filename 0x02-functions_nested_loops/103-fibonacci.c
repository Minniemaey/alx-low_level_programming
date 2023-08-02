#include <stdio.h>
/**
 * main - prints the sum of even-valued fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int num1 = 0, num2 = 1, nth = 0;
	int sum = 0;

	while (nth < 4000000)
	{
		nth = num1 + num2;
		num1 = num2;
		num2 = nth;
		if (nth % 2 == 0)
			sum = sum + nth;
	}
	printf("%d\n", sum);
	return (0);
}
