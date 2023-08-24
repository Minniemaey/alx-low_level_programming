#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) start(void);

/**
 * start - Prints a string before the
 * main function is executed.
 */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
