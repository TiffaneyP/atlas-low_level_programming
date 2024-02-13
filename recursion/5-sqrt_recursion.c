#include "main.h"
/**
 * _sqrt_return natural square root of number
 * @n: input number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (calsqrt(n, 0));
}
/**
 * calsqrt- calc sqrt
 * @n: in int
 * @d: in int
 *
 * Return: returns an int
 */

int calsqrt(int n, int d)
{
	if (n < 0 || d == n)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (d * d == n)
	{
		return (d);
	}
	return (calsqrt(n, d + 1));
}
