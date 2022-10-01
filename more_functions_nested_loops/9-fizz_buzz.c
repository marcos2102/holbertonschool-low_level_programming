#include <stdio.h>
#include "main.h"
/**
 * main - prints numbers from 1 to 100 in order, but for multiples of three
 *		prints 'Fizz', and for multiples of five prints 'Buzz'.
 *		for numbers which are multiples of both prints 'FizzBuzz'.
 *
 * Return: Always 0 (Success).
 */

void main(void)
{
	int i; /*FOR index*/

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		} else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
