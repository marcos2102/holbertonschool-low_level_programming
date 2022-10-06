#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first c.
 *
 * @str: string to print.
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
