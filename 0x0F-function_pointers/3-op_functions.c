#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate difference between two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function returns the modulo of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
