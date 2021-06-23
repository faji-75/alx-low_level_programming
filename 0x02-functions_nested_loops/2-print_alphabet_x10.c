#include "holberton.h"
/**
* print_alphabet_x10 - function to print the lowercase alphabet ten times.
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
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	l++;
}
}


