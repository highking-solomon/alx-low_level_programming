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

	if (n > 0)
	{
		_putchar(n);
		return (n % 10);
	}
	else
	{
		putchar(n);
		return (-1 * (n % 10));
	}
}
