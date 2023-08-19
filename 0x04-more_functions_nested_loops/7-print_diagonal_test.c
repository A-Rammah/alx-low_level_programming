#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
        int i = 0;
	int y = 0;

	if (n > 0)
	{
		for (y = 1; y <= n; y++)
		{
               		for (i = 0; i <= n; i++)
               		{	
				_putchar(' ');
               		}
	
			_putchar('\\');
			_putchar('\n');
		}
	}
	else 
	{
		_putchar('\n');	
	}
}
