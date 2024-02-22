#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- multiplication of two numbers
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
