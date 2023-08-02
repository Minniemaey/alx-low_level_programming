#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integer
 * @a: pointer
 * @n: number of elements to print
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		y = n - 1;
		if (x < y)
			printf(", ");
	}
	printf("\n");
}
