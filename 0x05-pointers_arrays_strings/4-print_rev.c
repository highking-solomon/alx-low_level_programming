#include "main.h"

/**
 * print_rev - print the reverse of a string
 *
 * @s: string to be reversed
 *
 */

void print_env(char *s)
{
	int i;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
