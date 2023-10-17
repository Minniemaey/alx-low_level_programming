#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: terminating parameter
 * @src: starting paramenter
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; i >= j; j++)
		dest[j] = src[j];
	return (dest);
}
