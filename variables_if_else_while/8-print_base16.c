#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print base 16 numbers in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	ch = 48; /*ascii code for char '0'*/
	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}
	ch = 97; /*ascii code for char 'a'*/
	while (ch <= 102)
	{
		putchar(ch);
		if (ch == 102)
		{
			putchar('\n');
		}
		ch++;
	}
	return (0);
}
