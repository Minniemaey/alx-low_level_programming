#include "main.h"
/**
 * _strpbrk - function that searches a string for a set of bytes
 * @s: input string
 * @accept: string to search for
 *
 * Return: pointed to matched byte
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
