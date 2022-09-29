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
	if (n <= -10)
	{
		n = n % 10 * -1;
		_putchar(n + '0');
	} else if (n >= 10)
	{
		n = n % 10;
		_putchar(n + '0');
	} else if (n > -1)
	{
		n = n;
		_putchar(n + '0');
	} else
	{
		n = n + -1;
		_putchar(n + -1 + '0');
	}
	return (n);
}
