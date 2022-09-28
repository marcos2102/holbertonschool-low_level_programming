#include "main.h"
/**
 * main - Entry point
 *
 * Description: print alphabete in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	void print_alphabet(void)
	{
		for (char letter = a; a <= z; a++)
		{	
			_putchar(letter);
		}

	}
	_putchar('\n');
	return (0);
}
