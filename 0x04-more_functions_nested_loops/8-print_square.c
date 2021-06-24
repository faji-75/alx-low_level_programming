#include "holberton.h"

/**
  *
  *
  */

void print_square(int size)
{
	int a;
	int b;

	b = size;

	while (size > 0)
	{
		a = b;
		while (a > 0)
		{
			_putchar(35);
			a--;
		}
		_putchar('\n');
		size --;
	}
}
