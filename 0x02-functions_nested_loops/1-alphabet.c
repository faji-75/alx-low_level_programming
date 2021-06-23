#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - function to print the lowercase alphabet.
 *Return: 0
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}


