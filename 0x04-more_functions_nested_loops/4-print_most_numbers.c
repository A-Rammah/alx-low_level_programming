#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if ('0' <= i < '2' && '2' < i < '4' && '4' < i <= '9')
		{
			_putchar(i);
		}
		else
		{
		}
	}

	_putchar('\n');
}
