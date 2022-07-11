#include "main.h"

/**
 * swap_int - function swaps the value of two integers
 * @a: int type
 * @b: inttype
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
