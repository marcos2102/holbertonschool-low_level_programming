#include "main.h"
/**
 * swap_int - swaps the value of two integers.
 *
 * @a: integer 1.
 *
 * @b: integer 2.
 */

void swap_int(int *a, int *b)
{
	int z; /*placeholder for the value of @a*/

	z = *a;
	*a = *b;
	*b = z;
}
