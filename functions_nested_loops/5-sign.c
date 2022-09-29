#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number to be checked.
 *
 * Return: 1 if n is greater than zero,
 *		0 if n is zero,
 *		-1 if n is less than zero.
 */

int print_sign(int n)
{
	int rv; /*return value*/

	if (n > 0)
	{
		rv = 1;
		_putchar('+');
	} else if (n < 0)
	{
		rv = -1;
		_putchar('-');
	} else
	{
		rv = 0;
		_putchar('0');
	}
	return (rv);
}
