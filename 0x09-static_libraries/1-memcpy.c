#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory storage destination
 * @src: source memory area
 * @n: number of byte
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
