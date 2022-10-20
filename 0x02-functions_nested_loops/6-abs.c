#include "main.h"

/**
 * _abs - Print the absolute value of a num
 *
 * @n: num to check
 *
 * Return: n
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
