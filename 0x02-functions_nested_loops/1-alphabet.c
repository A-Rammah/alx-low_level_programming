#include <stdio.h>

/*
 * DESCRIPTION: This is a prototype for printing the alphabet.
 * INPUT: N/A
 * RETUREN: 0
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	
		putchar(i);
		i++;
	}
	putchar('\n');

}
