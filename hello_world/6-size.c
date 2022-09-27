#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char), " byte(s)");
	printf("Size of an int: ", sizeof(int), " byte(s)");
	printf("Size of a long int: ", sizeof(long int), " byte(s)");
	printf("Size of a long long int: ", sizeof(long long int), " byte(s)");
	printf("Size of a float: ", sizeof(float), " byte(s)");
	return (0);
}
