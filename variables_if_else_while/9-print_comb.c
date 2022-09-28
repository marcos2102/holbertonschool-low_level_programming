#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 48;
	while (ch <= 57)
	{
		putchar(ch);
		if (ch == 57)
		{
			putchar('\n');
		} else
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
}
