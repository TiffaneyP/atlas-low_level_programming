#include "main.h"
/**
 * factor - get factor of a number
 *
 * @n:factor
 *
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial (n - 1));
