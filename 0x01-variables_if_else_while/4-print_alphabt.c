#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * print lower case followed by a new line
 * Return:0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == `q` || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}

