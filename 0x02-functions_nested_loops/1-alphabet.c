#include <stdio.h>
#include "holberton.h"
/**
* main - main block
* Description: Use `print_alphabet` function to print the alphabet in lowercase.
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


