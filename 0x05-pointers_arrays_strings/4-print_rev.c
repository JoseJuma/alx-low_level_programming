#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: char
 */

void rev_string(char *s)
{
	int i;


	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
