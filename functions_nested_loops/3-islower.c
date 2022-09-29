#include "main.h"
/**
 * _islower - checks for lowercase characters.
 *
 * @c: Stores the ascii code of the character to be checked.
 *
 * Return: 1 if character 'c' is lowecase, return 0 otherwise.
 */

int _islower(int c)
{
	int rv; /*return value*/

	if (c >= 97 && c <= 122)
	{
		rv = 1;
	} else
	{
		rv = 0;
	}
	return (rv);
}
