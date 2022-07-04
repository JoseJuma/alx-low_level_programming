#include <stdio.h>
/**
 * main - entry point
 * print lower case except q and e
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c !='e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
