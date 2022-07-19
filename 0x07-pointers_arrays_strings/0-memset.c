#include "main.h"

/**
 * _memset - put constant byte
 * @b: constant byte
 * @s: memory area
 * @n: number of bytes
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
