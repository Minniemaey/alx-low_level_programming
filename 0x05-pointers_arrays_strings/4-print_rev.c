#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string to reverse
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int str;
	int rev_str = 0;

	for (str = 0; s[str] != '\0'; str++)
	{
	}
	rev_str = str - 1;
	for (rev_str = str - 1; rev_str >= 0; rev_str--)
		_putchar(s[rev_str]);
	_putchar('\n');
}
