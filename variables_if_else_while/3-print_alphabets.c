#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabete in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	ch = 97; /*ascii code for char 'a'*/
	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	ch = 65; /*ascii code for char 'A'*/
	while (ch <= 90)
	{
		putchar(ch);
		if (ch == 90)
		{
			putchar('\n');
		}
		ch++
	}
	return (0);
}
