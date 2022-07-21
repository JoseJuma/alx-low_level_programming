#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: area to copy into
 * @src: area to copy
 * @n: number of elements to copy
 * Return: always 0
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *xy;

	xy = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (xy);
}
