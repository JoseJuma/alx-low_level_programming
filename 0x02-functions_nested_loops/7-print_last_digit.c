#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Description: it will print the last digit of a number
 * @n: the number to be checked
 * Return: last digit of n
 */
int print_last _digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
}
