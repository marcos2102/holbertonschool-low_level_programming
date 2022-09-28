#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print base 10 numbers (0-9) with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	num = 48; /*ascii code for char '0'*/
	while (num <= 57)
	{
		putchar(num);
		if (num == 57)
		{
			putchar('\n');
		}
		num++;
	}
}
