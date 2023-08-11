#include <stdio.h>

/**
 * main - main block
 * Description: This program will print the alphabet except q & e.
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';
	
	while (alphabet <= 'z')
	{	
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');
	return (0);
}
