#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: char pointer
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
