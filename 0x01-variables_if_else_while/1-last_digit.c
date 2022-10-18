#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main- Entry point
 *
 * Description: Prints a statement based on the value of the
 * last digit of a random number
 *
 * Return: 0 (success)
 */

int main(void)
{

	int n;
	int lstD;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	lstD = n % 10;
	if (lstD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstD);
	}
	else if (lstD < 6 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstD);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lstD);
	}
	return (0);

}
