#include "main.h"

/**
  *_pow_recursion -power function using recursion
  *@x: value to be raised
  *@y: power
  *
  *Return: power result
  *
  */

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	else if (y <= 0)
	{
		if (y < 0)
			return (-1);
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
