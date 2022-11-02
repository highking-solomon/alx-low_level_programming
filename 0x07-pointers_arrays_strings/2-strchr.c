#include "main.h"

/**
  *_strchr- loops throught the string to find the first occurence of char
  *
  *@s: string to check
  *@c: character being checked for
  *
  *Return: s if char found, else return NULL
  *
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (*s);
		else
			return ('\0');
	}
	return (*s);
}
