#include "holberton.h"

/**
  * print_square - prints square of #
  * @size: int type
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
			_putchar('#');
			a--;
		}
		_putchar('\n');
		size--;
	}
}
