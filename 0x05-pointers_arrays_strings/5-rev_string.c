#include "main.h"
#include <stdio.h>

/**
 * rev_string - the function reverses a string
 * @s: char array string type
 */
void rev_string(char *s)
{
	int start, temp;
	int end = 0;

	while (*(s + end) != '\0')
	{
		end++;
	}
	end -= 1;
	start = 0;
	while (end > start)
	{
		temp = s[star];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
