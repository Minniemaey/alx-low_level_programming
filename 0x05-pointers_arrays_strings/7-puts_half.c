#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len;
	int n;

	for (len = 0; str[len] != '\0'; len++)
		if (len % 2 == 0)
			n = len / 2;
		else
			n = (len - 1) / 2;
	for (n++; n < len; n++)
		_putchar(str[n]);
	_putchar('\n');
}
