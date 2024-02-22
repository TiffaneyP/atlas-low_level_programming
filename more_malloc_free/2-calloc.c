#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc- allocate memory for an array
 * @nmemb: number of members
 * @size: size
 * Return: return is void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	s = malloc(b);

	if (s == NULL)
		return (NULL);
	while (a < b)
	{
		s[a] = 0;
		a++;
	}
	return (s);
}
