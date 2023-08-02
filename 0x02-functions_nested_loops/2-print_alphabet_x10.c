#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10x
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char abc;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
	}
}
