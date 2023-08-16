#include <stdio.h>
#include "main.h"

/*
 * main - check the code.
 * DESCRIPTION: This is a prototype for printing the alphabet.
 * INPUT: N/A
 * RETUREN: 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
