#include "main.h"

/**
 * more_numbers - print numbers ten times
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int h;

	for (h = 0; h <= 10; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			-putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
