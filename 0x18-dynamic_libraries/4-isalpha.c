#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: character to check for
 * Return: 1 if letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
