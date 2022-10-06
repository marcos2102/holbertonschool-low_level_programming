#include "main.h"
/**
 * rev_string - reverses a string.
 *
 * @s: string to reverse.
 */

void rev_string(char *s)
{
	char tmp;
	int i, n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
		i++;
	while (n < i)
	{
		tmp = s[n];
		s[n] = s[i - 1];
		s[i - 1] = tmp;
		i--;
		n++;
	}
}
