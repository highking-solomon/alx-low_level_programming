#include "main.h"

/**
 * _islower- checks for lower case characters
 *
 * Return: 1 if lowercase, else 0
 *
 * @c: character to check
 *
 * using ASCII characters
 * a = 96
 * z = 123
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
