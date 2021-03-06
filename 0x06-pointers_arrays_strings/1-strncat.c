#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 * @dest: pointer to the string to be joined
 * @src: source string to be appended
 * @n: number
 *
 * Return: pointer to dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
