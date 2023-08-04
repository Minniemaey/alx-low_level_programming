#include "main.h"
/**
 * _memset - function that  fills memory with a constant byte
 * @s:memory area pointer
 * @b:constant byte
 * @n:number of bytes
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
