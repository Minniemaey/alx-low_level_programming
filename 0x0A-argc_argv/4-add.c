#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive number
 * @argc: number of argument
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
