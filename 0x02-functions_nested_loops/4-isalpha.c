#include "main.h"

/**
 * _isalpha- check for uppercase characters
 *
 * @c: character to check
 *
 * Return: 1 if uppercase, else 0
 *
 * using ASCII characters
 * A=65
 * Z=90
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
