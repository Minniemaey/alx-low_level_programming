#include "main.h"

/**
* binary_to_uint - function that converts binary num to an unsigned int
* @b: string pointer
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int y = 0;

	if (b == NULL)
		return (0);

	while (b[x])
	{
		if (!(b[x] == '0' || b[x] == '1'))
			return (0);
		y <<= 1;
		if (b[x] == '1')
			y += 1;
		x++;
	}
	return (y);
}
