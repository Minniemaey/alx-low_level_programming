#include "main.h"
/**
 * rot13 - function that encodes a string
 * @str: string to encode
 *
 * Return: Always 0
 */
char *rot13(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		while ((str[a] >= 'A' && str[a] <= 'Z') ||
				(str[a] >= 'a' && str[a] <= 'z'))
		{
			if ((str[a] >= 'A' && str[a] <= 'M') ||
					(str[a] >= 'a' && str[a] <= 'm'))
			{
				str[a] += 13;
			}
			else
				str[a] -= 13;
			a++;
		}
		a++;
	}
	return (str);
}
