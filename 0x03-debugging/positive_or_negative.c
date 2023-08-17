#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: This program will assign a random number to the
 * variable n each time it is executed
 * Return: 0
 */

void positive_or_negative(int i)
{
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
