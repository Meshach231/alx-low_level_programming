#include "main.h"

/**
 * print_last_digit - entry point
 * Description: printing last digits of numbers
 * @n: n is an integer
 * Return: int
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
