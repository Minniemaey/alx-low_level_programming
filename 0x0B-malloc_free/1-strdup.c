#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	unsigned int a = 0;
	unsigned int b = 0;
	char *str_dup;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		b++;
	str_dup = malloc(sizeof(char) * (a + 1));
	if (str_dup == NULL)
		return (NULL);
	for (b = 0; b <= a; b++)
		str_dup[b] = str[b];
	return (str_dup);
}
