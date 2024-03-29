#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - index of int
 * @array: array
 * @size: size 
 * @cmp: function, arg
 * Return: return an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
