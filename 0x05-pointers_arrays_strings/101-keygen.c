#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function that generates random valid passwords
 *
 * Return: Always 0
 */
int main(void)
{
	char passkey;
	int n;

	srand((int)time(NULL));
	while (n <= 2645)
	{
		passkey = rand() % 128;
		n = n + passkey;
		putchar(passkey);
	}
	putchar(2772 - n);
	return (0);
}
