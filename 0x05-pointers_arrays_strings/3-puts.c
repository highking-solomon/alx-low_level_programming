#include "main.h"

/**
 * _puts - function to print a string
 *
 * @str: string to be displayed.
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
