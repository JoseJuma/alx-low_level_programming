#include "main.h"

/**
 * _strspn -gets lenght of a prefix  substring
 * @s: string
 * @accept: buffer
 * Return: 0
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				break;
		}
		if (!(accept[i]))
			break;
	}
	return (j);
}
