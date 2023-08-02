#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: int value to swap
 * @b: int value to swap
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swapval;

	swapval = *a;
	*a = *b;
	*b = swapval;
}
