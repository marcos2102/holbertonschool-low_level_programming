#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu\n byte(s)", sizeof(char), "%s byte(s)");
	printf("Size of an int: %lu\n", sizeof(int), " byte(s)");
	printf("Size of a long int: %lu\n", sizeof(long int), " byte(s)");
	printf("Size of a long long int: %lu\n", sizeof(long long int), " byte(s)");
	printf("Size of a float: %lu", sizeof(float), " byte(s)");
	return (0);
}
