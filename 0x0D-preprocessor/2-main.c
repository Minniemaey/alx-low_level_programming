#include <stdio.h>
/**
 * main - program prints the name of the file it was compiled from
 * @void: No argument
 *
 * Return: Always O
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
