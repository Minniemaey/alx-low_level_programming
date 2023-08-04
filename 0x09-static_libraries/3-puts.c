#include "main.h"
/**
 * _puts - function that prints a string
 * @str:string to print
 * Return: Always 0
 */
void _puts(char *str)
{
	int abc;

	for (abc = 0; str[abc] != '\0'; abc++)
		_putchar(str[abc]);
	_putchar('\n');
}
