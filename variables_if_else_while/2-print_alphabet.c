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
	return (0);
}
