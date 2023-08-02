#include "main.h"
/**
 * _strncpy - function that copies string
 * @dest: dest string
 * @src: src string pointer
 * @n: number
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; (a < n && src[a] != '\0'); a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
