#include "main.h"

/**
  * get_endianness - functions that checks for endianess
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	unsigned int n = 1;
	char *chars = (char *)&n;

	if (*chars)
		return (1);
	return (0);
}
