#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
	unsigned int x = 0;
	int y = 1;

	do {
		if (*s == '-')
			y =  y * -1;
		else if (*s >= 48 && *s <= 57)
			x = (x * 10) + (*s - '0');
		else if (x > 0)
			break;
	} while (*s++);
	return (x * y);
}
