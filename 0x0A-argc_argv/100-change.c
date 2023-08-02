#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: number of argc
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int change;
	int coinvalues[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = 0;
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; a >= 0 && b < 5; b++)
	{
		while (a >= coinvalues[b])
		{
			change++;
			a = a - coinvalues[b];
		}
	}
	printf("%d\n", change);
	return (0);
}
