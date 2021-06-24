#include "holberton.h"
/**
  * print_most_numbers - function prints from 0 t0 9 except 2 and 4.
  * No return value.
  */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		while (i != 2 && i != 4 && i < 10)
		{
		_putchar(i + '0');
		i++;
		}
		i++;
	}
	_putchar('\n');
}
