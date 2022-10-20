#include "main.h"

/**
 * _isalpha- check for alphabet
 *
 * @c: character to check
 *
 * Return: 1 if alphabet, else 0
 *
 * using ASCII characters
 * A=65 a=97
 * Z=90 z=122
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
