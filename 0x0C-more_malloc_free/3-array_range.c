#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, range;

	if (min > max)
		return (NULL);
	range = (max - min + 1);
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		arr[i] = min++;
	return (arr);
}
