#include "main.h"
/**
 * _isalpha - will test if something is a letter or not.
 * @c: checked input
 * Return: return 1 if letter or else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else if (c != 'a' || c != 'A')
	{
		return (0);
	}
return (0);
}
