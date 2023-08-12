#include <stdio.h>

/**
 * main - main block
 * Description: This program will print the alphabet.
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
