#include "main.h"
#include <stdio.h>

/**
 * print_to_98- print to number 98
 *
 * @n: parameter to start count
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
}
