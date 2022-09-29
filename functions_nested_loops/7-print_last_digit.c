#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: number to be checked.
 *
 * Return: Always 0 (Success).
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	if (n >= 10)
	{
		n = n % 10 + '0';
		_putchar(n);
	} else
	{
		n = n + '0';
		_putchar(n);
	}
	return (0);
}
