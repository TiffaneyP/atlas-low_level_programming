#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_noncat -
 * @s1:
 * @s2:
 * @n:
 *
 * Return:
 */
char *string_noncat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, b = 0, t = 0, d = 0
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;

	while (s2[t])
		t++;

	if (n >= t)
		d = j + t;
	else
		d = j + n;

	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);

	t = 0;
	while (b < d)
	{
		if (b <= j)
			str[b] = s1[b];

		if (b >= j)
		{
			str[b] = s2[t];
			t++;
		}
		b++;
	}
	str[b] = '\0';
	return (str);
}
