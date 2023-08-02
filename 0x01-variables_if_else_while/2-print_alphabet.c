#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		putchar(chars);
	}
	putchar('\n');

	return (0);
}
