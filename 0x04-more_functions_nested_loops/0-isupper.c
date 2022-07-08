#include "main.h"

/**
 * -isupper - check if a letter is upper case
 *  @c: our number
 *
 *  Return: 1 if upper, if not 0
 */

int _isupper(int c)
{
	if (c >= 64 && c <= 90)
	{
		return (1);
	}

	return (0);
}
