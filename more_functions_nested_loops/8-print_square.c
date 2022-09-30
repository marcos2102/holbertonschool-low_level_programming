#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: size of the square (size x size).
 */

void print_square(int size)
{
	int i, j; /*FOR index*/

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
