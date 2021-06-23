#include <stdio.h>
#include "holberton.h"
/**
* main - main block
* print_alphabet() : function to print the lowercase alphabet.
*Return: 0
*/

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}


