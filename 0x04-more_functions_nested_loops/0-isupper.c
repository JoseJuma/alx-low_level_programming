#include "main.h"

/**
 * _isupper - checks if a letter is upper case or not
 * @c: int
 * Return: 1 if it is upper case if not 0
 *
 */

int _isupper(int c)
{
	if (c >= 64 && c <= 90)
	{
		return (1);
	}

	return (0);
}
