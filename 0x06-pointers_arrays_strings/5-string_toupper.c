#include "main.h"
/**
 * string_toupper - function that changes all lowercase to uppercase
 * @str: string to change case
 *
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int abc;

	for (abc = 0; str[abc] != '\0'; abc++)
	{
		if ((str[abc] >= 'a') && (str[abc] <= 'z'))
			str[abc] = str[abc] - 32;
	}
	return (str);
}
