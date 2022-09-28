/*
 * ********
 ****   ***
 **     ***
 *  *   ***
 ****   ***
 ****   ***
 ****   ***
 ****   ***
 ****   ***
 */
#include "main.h"
/**
 * excercise 1;
 * print_alphabet: print alphabete in lowercase using _putchar
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
