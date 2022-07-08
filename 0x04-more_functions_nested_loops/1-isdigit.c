#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 - 9)
 * @c: int type
 * Return: 1 if it is a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);

}

