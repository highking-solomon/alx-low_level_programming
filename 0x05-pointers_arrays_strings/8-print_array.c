#include "main.h"

/**
 * print_array - print the elements of array
 *
 * @a: array to be used
 * @n: number of elements
 *
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == n - 1)
			printf("%d", a[b]);
		else
			printf("%d, ", a[b]);
	}
	printf("\n");
}
