#include "holberton.h"
/**
* main - main block
* print_alphabet function to print the lowercase alphabet.
* Return: 0
*/

void print_alphabet_x10(void)
{

	char letter;

	int l = 0;


while (l < 10)
{
	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	l++;
}
}


