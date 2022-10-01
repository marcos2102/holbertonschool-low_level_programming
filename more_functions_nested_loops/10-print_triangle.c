#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	int i, j; /*FOR index*/

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
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
