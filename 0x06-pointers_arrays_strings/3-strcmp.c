#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int d;

	d = 0;
	while ((*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (s1 == s2)
		return (0);
	else if (s1 != s2)
		d = (*s1 - *s2);
	return (d);
}

