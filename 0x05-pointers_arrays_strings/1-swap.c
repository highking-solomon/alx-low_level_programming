#include "main.h"

/**
 * swap_int - fuxnction to swap values of two integers
 *
 * @a: first value
 * @b: second value
 *
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
