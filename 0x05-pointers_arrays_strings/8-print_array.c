#include"main.h"

/**
 * print_array - prints n elements of an array
 * @a: int type array
 * @n: int type integer
 * Description: print n elements os an array separeted by commas and space
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}
