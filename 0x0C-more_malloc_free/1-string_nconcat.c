#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int a, b;

	b = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a]; a++)
		b++;
	new_str = malloc(sizeof(char) * (b + 1));
	if (new_str == NULL)
		return (NULL);
	b = 0;
	for (a = 0; s1[a] != '\0'; a++)
	{
		new_str[b++] = s1[a];
	}
	for (a = 0; (s2[a] != '\0' && a < n); a++)
	{
		new_str[b++] = s2[a];
	}
	new_str[b] = '\0';
	return (new_str);
}
