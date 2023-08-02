#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: Alwats 0
 */
char *cap_string(char *str)
{
	int abc;

	for (abc = 0; str[abc] != '\0'; abc++)
	{
		if (abc == 0 && str[abc] >= 'a' && str[abc] <= 'z')
		{
			str[abc] -= 32;
		}
		else if (str[abc] == ' ' || str[abc] == '\t' || str[abc] == '\n' ||
			str[abc] == ',' || str[abc] == ';' || str[abc] == '.' ||
			str[abc] == '!' || str[abc] == '?' || str[abc] == '"' ||
			str[abc] == '(' || str[abc] == ')' || str[abc] == '{' || str[abc] == '}')
		{
			if (str[abc + 1] >= 'a' && str[abc + 1] <= 'z')
			{
				str[abc + 1] -= 32;
			}
		}
	}
	return (str);
}
