#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j * i > 9)
			{
				_putchar(j * i / 10 + '0');
				_putchar(j * i % 10 + '0');
			} else if (j != 0)
			{
				_putchar(' ');
				_putchar(j * i + '0');
			} else
			{
				putchar('0');
			}
			if (j == 9)
			{
				putchar('\n');
			} else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
