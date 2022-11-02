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
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
