#include "main.h"

/**
 * _islower - finds lowers alphabets
 * Description: finds lowers alphabets
 * @c: char type letter
 * Return: 1 if character is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
