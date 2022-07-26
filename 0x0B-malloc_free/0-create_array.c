#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @c: specific char
 * @size: size of the array
 * Return: pointer to malloc created memory address or null if error
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
