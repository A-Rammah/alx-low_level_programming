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
	char com = ',';

	while (i <= 9)
	{
		putchar('0' + i);
		while (i < 9)
		{
			putchar(com);
		}
	}
	for (i = 0; i <= 9; i++)
	{

		putchar('0' + i);
		putchar(',');
	}

	putchar('\n');
	return (0);
}
