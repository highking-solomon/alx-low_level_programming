#include "main.h"

/**
 * _strlen - function to count length of string
 *
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i;
	int strlen = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		strlen++;
	}
	return (strlen);
}
