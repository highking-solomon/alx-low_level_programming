#include "main.h"

/**
 *_memcpy - Function to copy bytes from one memory to another
 *
 *@dest: destination memory
 *@src: source memory
 *@n: number of bytes
 *
 *Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}

	return (dest);
}
