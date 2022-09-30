#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the termianl.
 *
 * @n: diagonal size (times '\' is printed).
 */

void print_diagonal(int n)
{
	int i, j; /*FOR index*/

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
