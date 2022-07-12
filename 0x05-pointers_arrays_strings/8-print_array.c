#include"main.h"
#include <stdio.h>

/**
 * print_array - thr function prints array
 * @a: pointer of an array
 * @n: how many times to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
