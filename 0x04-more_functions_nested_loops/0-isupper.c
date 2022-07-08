#include "main.h"

/**
 * -isupper - check if a letter is upper case
 *  @x: our number
 *
 *  Return: 0
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
