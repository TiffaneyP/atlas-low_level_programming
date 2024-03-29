#include "calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add
 * @a: int
 * @b: int
 * Return: return an int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: int
 * @b: int
 * Return: return an int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: int
 * @b: int
 * Return: return an int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: int
 * @b: int
 * Return: return an int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - module
 * @a: int
 * @b: int
 * Return: return an int
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
