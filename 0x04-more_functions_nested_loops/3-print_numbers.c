#include "holberton.h"
/**
  * print_numbers - function prints from 0 t0 9.
  * No return value.
  */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
