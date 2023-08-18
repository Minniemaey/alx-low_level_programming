#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function prints numbers
 * @separator: string printed between numbers
 * @n: number of integers passed
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}

