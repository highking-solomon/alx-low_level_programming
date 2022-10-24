#include "main.h"

/**
 * puts2 - display every other character of a string
 *
 * @str: string to work on
 * 
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
