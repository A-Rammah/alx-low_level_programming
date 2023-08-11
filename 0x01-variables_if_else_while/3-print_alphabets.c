#include <stdio.h>

/**
 * main - main block
 * Description: This program will print the alphABET.
 * variable n each time it is executed
 * Return: 0
 */

int main(void)
{
	char i = 'a';
	char m = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
