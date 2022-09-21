#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - prints whether n is positive or negative
 *
 * @i: letter being passed as argument
 *
 * Return: Success(0)
 */

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
}
