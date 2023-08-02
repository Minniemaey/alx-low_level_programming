#include "main.h"
/**
 * print_alphabet - print lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
