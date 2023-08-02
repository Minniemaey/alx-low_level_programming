#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: string to reverse
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int len;
	int rev_len;
	int n;
	char str;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	rev_len = len - 1;
	for (n = 0; n < len / 2; n++)
	{
		str = s[n];
		s[n] = s[rev_len];
		s[rev_len--] = str;
	}
}
