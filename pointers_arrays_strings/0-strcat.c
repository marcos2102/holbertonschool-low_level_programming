#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * @dest: string 1.
 *
 * @src: string 2.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j, x, z;

	i = 0;
	j = 0;
	z = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	for (x = i + 1; x <= (i + j); x++)
	{
		dest[x] = src[z];
		z++;
	}
	return (dest);
}
