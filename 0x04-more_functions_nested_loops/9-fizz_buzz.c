#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Decription: print Fizz if multiplies os 3 ,Buzz of 5 and FizzBuzz for both
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 ==)
			printf("Buzz");

		if (i != 100)
			printf(" ");
		i++
	}
	printf("\n");

	return (0);
}
