#include "main.h"
#include <ctype.h>

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */

int _islower(int c)
{
	int r;

	if (islower(c) != 0)
	{
		r = 1;
	}
	else if (islower(c) == 0)
	{
		r = 0;
	}
	return (r);
}
