#include "main.h"

/**
 * print_alphabet - entry point
 * Description: prints lowers case followed by a line
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
