#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints keys for crackme5
 * @argc: argument count
 * @argv: argument []
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char keys[7], *strings;
	int n = strlen(argv[1]), i, tmp;

	strings =
		"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (n ^ 59) & 63;
	keys[0] = strings[tmp];

	tmp = 0;
	for (i = 0; i < n; i++)
		tmp += argv[1][i];
	keys[1] = strings[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < n; i++)
		tmp *= argv[1][i];
	keys[2] = strings[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < n; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	keys[3] = strings[rand() & 63];

	tmp = 0;
	for (i = 0; i < n; i++)
		tmp += (argv[1][i] * argv[1][i]);
	keys[4] = strings[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	keys[5] = strings[(tmp ^ 229) & 63];

	keys[6] = '\0';
	printf("%s", keys);
	return (0);
}
