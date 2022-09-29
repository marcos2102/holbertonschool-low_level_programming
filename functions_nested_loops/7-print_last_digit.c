#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: number to be checked.
 *
 * Return: Returns 0 (Success).
 */

int print_last_digit(int n)
{
	if (n >= 10 || n <= -10)
	{
		n = _abs(n) % 10 + '0';
		_putchar(n);
	} else
	{
		_putchar(n);
	}
	return (0);
}
