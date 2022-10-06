#include "main.h"
/**
 * rev_string - reverses a string.
 *
 * @s: string to reverse.
 */

void rev_string(char *s)
{
	char *aux;
	int i, j, n;

	aux = s;
	i = 0;
	n = 0;
	while (s[i] != '\0')
		i++;
	for (j = i; j >= 0; j--)
	{
		aux[n] = s[j - 1];
		n++;
	}
	*s = *aux;
}
