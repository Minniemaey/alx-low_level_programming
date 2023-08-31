#include "main.h"

/**
* binary_to_uint - function that converts binary num to an unsigned int
* @b: string pointer
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, y = 0;

	if (b == NULL)
		return (0);

	while (b[x])
	{
		if (b[x] == '0' || b[x] == '1')
		{
			y <<= 1;
			y += b[x] - '0';
			x++;
		}
		else
			return (0);
	}
	return (x);
}
