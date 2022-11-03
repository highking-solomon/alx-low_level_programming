#include "main.h"

/**
  *factorial - function that returns factorial of a given number
  *@n: number to worked on
  *
  *Return: factorial result
  *
  */

int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
			return (-1);
		return (1);
	}

	return (n * factorial(n - 1));
}
