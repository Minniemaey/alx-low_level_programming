#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: string to encode for
 *
 * Return: Always 0
 */
char *leet(char *str)
{
	int a;
	int b;

	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	a = 0;
	while (str[a] != '\0')
	{
		for (b = 0; b < 10; b++)
		{
			if (str[a] == x[b])
			{
				str[a] = y[b];
			}
		}
		a++;
	}
	return (str);
}
