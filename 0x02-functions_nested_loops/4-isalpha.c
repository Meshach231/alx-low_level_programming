#include "main.h"

/**
 * _isalpha - Function that checks for alphabetuc character
 * Description: check if a character is a letter lowercase or uppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _isalpha(int c)
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
