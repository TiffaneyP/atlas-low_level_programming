#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- print the sum of diagonals
 * @a: array
 * @size: size of array
 *
 * Return: Return is void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int Diag1 = 0;
	int Diag2 = 0;

	for (i = 0; i < size; i++)
	{
		Diag1 += a[(size + 1) * i];
	}
	for (j = 1; j <= size; j++)
	{
		Diag2 += a[(size - 1) * j];
	}
	printf("%d, %d\n", Diag1, Diag2);
}
