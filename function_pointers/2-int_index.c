#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - index
 * @array: array
 * @size: size 
 * @cmp: function, arg
 * Return: return an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
