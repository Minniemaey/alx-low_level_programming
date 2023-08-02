#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	unsigned int a, b, c;

	a = 0;
	b = 0;
	c = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] || s2[a]; a++)
		b++;
	newstr = malloc(sizeof(char) * b);

	if (newstr == NULL)
		return (NULL);
	for (a = 0; s1[a]; a++)
		newstr[c++] = s1[a];
	for (a = 0; s2[a]; a++)
		newstr[c++] = s2[a];
	return (newstr);
}
