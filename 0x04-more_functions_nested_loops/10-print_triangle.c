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
			_putchar('35');
			c--;
		}
		_putchar('\n');
		size--;
	}
}
