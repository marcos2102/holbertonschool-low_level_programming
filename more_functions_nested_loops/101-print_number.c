#include <stdlib.h>
/**
 * print_number - prints an integer.
 *
 * @n: integer to print.
 *
 * Return: 0
 */

void print_number(int n)
{
	while (n >= 10)
	{
		n = i / 10;
		_putchar(n % 10 + '0');
	}
	_putchar(n + '0');
}
