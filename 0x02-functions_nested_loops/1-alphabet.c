#include <stdio.h>
#include "holberton.h"
/**
* main - main block
* Description: Use `putchar` function to print the alphabet in lowercase.
* Description: print_alphabet prints the alphabet
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


