#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, byte;
	char *arr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
