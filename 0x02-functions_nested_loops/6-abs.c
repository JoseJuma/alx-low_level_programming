#include "main.h"

/**
 * _abs - finds the absolute values of a numnber
 * @c: number to be computeed.
 * Return: Absolute value f the number orzero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
