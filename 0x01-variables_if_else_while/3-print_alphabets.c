#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * print alphabetss in lower then upper
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;	
	}

	c = 'A';

	while (c <= 'Z')

	{
		putchar(c);
		c++;

	}
	putchar('\n');

	return (0);
}



