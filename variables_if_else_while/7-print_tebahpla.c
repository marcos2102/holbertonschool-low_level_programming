#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print lowercase alphabete in reverse using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	ch = 122; /*ascii code for char 'a'*/
	while (ch >= 97)
	{
		putchar(ch);
		if (ch == 97)
		{
			putchar('\n');
		}
		ch--;
	}
	return (0);
}
