#include "holberton.h"

/**
  * print_triangle - prints triangle of #
  * @size: int type
  */

void print_triangle(int size)
{
	int a;
	int b;
	int c;
	int d;

	b = size;
	d = size;
	if (size < 1)
		_putchar('\n');

	while (size > 0)
	{
		b--;
		a = b;

		while (a > 0)
		{
			a--;
			_putchar(' ');

		}

		c = d - b;
		while (c > 0)
		{
			_putchar('#');
			c--;
		}
		_putchar('\n');
		size--;
	}
}
