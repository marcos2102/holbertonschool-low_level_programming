#include "main.h"
/*
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
			if (letter == 'z')
			{
				_putchar('\n');
			}
		}
	}
}
