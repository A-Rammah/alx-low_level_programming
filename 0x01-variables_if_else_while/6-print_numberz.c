#include <stdio.h>

/**
 * main - main block
 * Description: This program will print the alphabet.
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');
	return (0);
}
