#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: check number
 *
 * Return: last digit of the number
 *
 */

int print_last_digit(int n)
{

	int m;
	m = n % 10;

	if (n > 0)
	{
		_putchar(m + '0');
		return (m);
	}
	else
	{
		_putchar(m + '0');
		return (m * -1);
	}
}
