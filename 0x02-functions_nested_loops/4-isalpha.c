#include "main.h"

/**
 * _isapha - entry point
 * @c: the integer value it receives
 * Description: checks if alphabet
 * Return: 1 if true. 0 if false.
 */

int _isapha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
