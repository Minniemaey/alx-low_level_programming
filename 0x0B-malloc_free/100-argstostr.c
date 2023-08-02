#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arg 1
 * @av: arg 2
 *
 * Return: pointer to concat string
 */
char *argstostr(int ac, char **av)
{
	int a, b;
	int arg1 = ac;
	int arg2 = 0;
	char *concat;

	a = 0;
	b = 0;
	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			arg1++;
	concat = malloc(sizeof(char) * arg1 + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	arg2 = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			concat[arg2] = av[a][b];
			arg2++;
		}
		concat[arg2] = '\n';
		arg2++;
	}
	concat[arg2] = '\0';
	return (concat);
}
