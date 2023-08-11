#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int mul;
	char *num1 = argv[1], *num2 = argv[2];
	int a;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 0; num1[a] != '\0'; a++)
	{
		if (num1[a] < '0' || num1[a] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (a = 0; num2[a] != '\0'; a++)
	{
		if (num2[a] < '0' || num2[a] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	if (argc == 3)lkmul = atoi(num1) * atoi(num2);
		printf("%d\n", mul);

	return (0);
}
