#include "main.h"
/**
 * _strcat - function to concatenate strings
 *
 * @dest: pointer to resulting string
 * @src: pointer to the string to be appended
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = src[b];
	return (dest);
}
