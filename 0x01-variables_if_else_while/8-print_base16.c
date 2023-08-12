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
	char alpha = 'a';

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
