#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * print alphates in lowers case
 * return: 0
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
