#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * print alphates in lowers case
 * Return: 0 (success)
 *
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
