#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare
 * @s1: pointer
 * @s2: pointer parameter
 * Return: *dest
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int r;

	i = 0;

	while (s1[1] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	r = s1[i] - s2[i];
	return (r);
}
