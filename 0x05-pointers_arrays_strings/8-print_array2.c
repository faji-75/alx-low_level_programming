#include "holberton.h"



void print_array(int *a, int n)
{
	int i = 0;
	int j, w, x, y = 1, z;

	while (i < n)
	{
		j = *a[i];
		z = j % 10;
		j /= 10;
		w = j;

		if (z < 0 || j < 0)
		{
			z *= -1, w *= -1, j *= -1;
			_putchar('-');
		}

		if (w > 0)
		{
			while (w / 10 != 0)
			{
				w /= 10, y *= 10;
			}
			while (y > 0)
			{
				x = j / y;
				_putchar('0' + x);
				j -= x * y;
				y /= 10;
			}
		}
		_putchar('0' + z);
		_putchar(',');
		_putchar(' ');	
		i++;
	}
}
