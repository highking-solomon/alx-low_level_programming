#include "main.h"

/**
 * main - Entry point
 *
 * Description: This code prints a string to the screen
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char display[] = "_putchar";
	int i = 0;

	while (display[i] != '\0')
	{
		_putchar(display[i]);
		i++;
	}
	_putchar('\n');

	return (0);

}
