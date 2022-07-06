#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Description: it will print the last digit of a number
 * @n: the number to be checked
 */
int print_last _digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
