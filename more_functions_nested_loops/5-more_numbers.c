#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 */

void more_numbers(void)
{
	int i, m, j; /*@i, j: FOR index
			*@m: modulus
			*/
	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 != 0)
			{
				_putchar(i / 10 + '0');
				m = i % 10;
			} else
			{
				m = i;
			}
			_putchar(m + '0');
		}
	}
}
