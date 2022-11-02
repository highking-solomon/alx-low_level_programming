#include "main.h"

/**
*_memset - function to fill memory with a contant byte
*
*@s: buffer array
*@b: constant byte
*@n: number of times to fill
*
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}
	return (s);
}
