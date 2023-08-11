#include <stdio.h>

/**
 * main - main block
 * Description: This program will print the alphabet.
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = '0';

	while (alphabet <= '9')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
