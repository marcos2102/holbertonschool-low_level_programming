#include "main.h"
/**
 * _isalpha - checks for alphabetic characters, upper or lowercase.
 *
 * @c: the letter to be checked.
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	int rv; /*return value*/

	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		rv = 1;
	} else
	{
		rv = 0;
	}
	return (rv);
}
