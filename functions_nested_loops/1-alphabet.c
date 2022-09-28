#include "main.h"

/**
 * print_alphabet - prints alphabete in lowercase, followed by a new line using '_putchar'
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
