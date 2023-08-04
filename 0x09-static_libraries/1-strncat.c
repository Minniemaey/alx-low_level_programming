#include "main.h"
/**
 * _strncat - concatenate strings that use at most n bytes from src
 * @dest: resulting string
 * @src: string to concatenate
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
