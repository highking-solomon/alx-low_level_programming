#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s : string to be reversed
 *
 */

void rev_string(char *s)
{
	int length, a, b;
	char x;

	for (length = 0; s[length] != '\0'; length++)
		;
	a = 0;
	b = length - 1;

	while (b > a)
	{
		x = s[a];
		s[a] = s[b];
		s[b] = x;
		b--;
		a++;
	}
}
