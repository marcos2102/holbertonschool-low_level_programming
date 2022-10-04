#include "main.h"
/**
 * main -prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int j;

	for (int i = 0; i <= 8; i++)
	{
		j = i + 1;
		while (j <= 9)
		{
		_putchar(i + '0');
		_putchar(j + '0');
		if (i != 8)
			_putchar(',');
		_putchar(' ');
		j++;
		}
	}

	return (0);
}
