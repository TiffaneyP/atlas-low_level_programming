#include "main.h"
/**
 * puts2- prints certain chars of string
 * @str: passed in character as pointer
 *
 * Return: return is void
 */
void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		if (len % 2 == 0)
			_putchar(*str);
		len++;
		str++;
	}
	_putchar('\n');
}
