#include "main.h"
#include <stdlib.h>
/**
 * _str - free string array
 * @array: char array
 * @n: array height
 *
 * Return: str
 */
void _str(char **array, unsigned int n)
{
	if (array != NULL && n != 0)
	{
		for (; n > 0; n--)
		{
			free(array[n]);
		}
		free(array[n]);
		free(array);
	}
}
/**
 * *strtow - splits a string
 * @str: string to split
 *
 * Return: array pointer
 */
char **strtow(char *str)
{
	char **split_str;
	unsigned int n, a, b, c, d;

	if (str == NULL || (*str == '\0'))
		return (NULL);
	for (a = n = 0; str[a] != '\0'; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			n++;
	}
	split_str = malloc(sizeof(char *) * (n + 1));
	if (split_str == NULL || n == 0)
	{
		free(split_str);
		return (NULL);
	}
	for (b = d = 0; b < n; b++)
	{
		for (a = d; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				d++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				split_str[b] = malloc(sizeof(char) * (a - d + 2));
				if (split_str[b] == NULL)
				{
					_str(split_str, b);
					return (NULL);
				}
				break;
			}
		}
		for (c = 0; d <= a; d++, c++)
			split_str[b][c] = str[d];
		split_str[b][c] = '\0';
	}
	split_str[b] = NULL;
	return (split_str);
}
