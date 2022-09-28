#include <stdio.h>

/* excercise n° 1*/
void print_alphabet(void)
{
	int c;
	c = 97;
	while (c <= 122)
	{
		_putchar(c);
		if (c == 122)
		{
			_putchar("\n");
		}
		c++;
	}
	return (0);
}
