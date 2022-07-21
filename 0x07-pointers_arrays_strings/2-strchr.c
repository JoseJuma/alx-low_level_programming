#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: array
 * @c: char to locate
 * Return: 0
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
