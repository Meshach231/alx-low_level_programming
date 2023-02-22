#include "main.h"

/**
 * _isapha - entry point
 * @c: the integer value it receives
 * description: checks if alphabet
 * return: 1 if the character is letter, lowercase or uppercase, 0 otherwise
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
