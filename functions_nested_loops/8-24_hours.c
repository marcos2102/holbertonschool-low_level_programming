#include "main.h"
/**
 * jack_bauer - prints every minute of the day, from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2, h2l;

	h2l = 9;
	for (h1 = 0; h1 <= 2; h1++)
	{
		if (h1 == 2)
		{
			h2 = 0;
			h2l = 3;
		}
		for (h2 = 0; h2 <= h2l; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
