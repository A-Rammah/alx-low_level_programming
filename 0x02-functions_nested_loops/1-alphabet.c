#include "main.h"

/*
 *print_alphabet - fundtion prints alphabet.
 * FUNCTIONS: print_alphabet.
 * DESCRIPTION: This is a prototype for printing the alphabet.
 * INPUT: N/A
 * RETUREN: 0
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{

		_putchar(i);
		i++;
	}
	_putchar('\n');
}
