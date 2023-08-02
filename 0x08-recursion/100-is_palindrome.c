#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string pointer
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * _palindrome - checks if string is palindrome
 * @s: string
 * @len: string length
 *
 * Return: palindrome
 */
int _palindrome(char *s, int len)
{
	if (len < 1)
	{
		return (1);
	}
	if (*s == *(s + len))
		return (_palindrome(s + 1, len - 2));
	return (0);
}


/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: Always 0
 */
int is_palindrome(char *s)
{
	if (!*s)
	{
		return (1);
	}
	return (_palindrome(s, (_strlen_recursion(s) - 1)));
}
