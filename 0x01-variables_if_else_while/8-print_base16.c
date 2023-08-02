#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chars;

	for (chars = '0'; chars <= '9'; chars++)
	{
		putchar(chars);
	}
	for (chars = 'a'; chars <= 'f'; chars++)
	{                                                            putchar(chars);
	}
	putchar('\n');

	return (0);
}
