#include "main.h"

/**
 * puts_half - function to print half of a string
 *
 * @str: string to be worked on
 *
 */

void puts_half(char *str)
{
	int length, a, d;

	for (length = 0; str[length] != '\0'; length++)
		;

	a = (length - 1) / 2;

	for (d = a + 1; str[d] != '\0'; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n')
}
