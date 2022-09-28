#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabete in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	ch = 97; /*ascii code for char 'a'*/
	while (ch <= 122)
	{
		if (ch == 101 || ch == 113)
		{
			ch++;
		}
		putchar(ch);
		if (ch == 122)
		{
			putchar('\n');
		}
		ch++;
	}
	return (0);
}
