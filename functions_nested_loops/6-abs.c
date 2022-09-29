#include "main.h"
/**
 * _abs - returns the absolute value of an integer.
 *
 * @n: number to be checked.
 *
 * Return: Returns the absolute number of 'n'.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

