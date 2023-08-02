#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: matrix
 * @size: size of matrix
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int b;
	int diag_x = 0;
	int diag_y = 0;

	for (b = 0; b < size; b++)
	{
		diag_x += a[b];
		a += size;
	}
	a -= size;

	for (b = 0; b < size; b++)
	{
		diag_y += a[b];
		a -= size;
	}
	printf("%d, %d\n", diag_x, diag_y);
}
