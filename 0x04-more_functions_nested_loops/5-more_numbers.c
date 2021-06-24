#include "holberton.h"
/**
  * more_numbers - function prints from 0 t0 14.
  * No return value.
  */

void more_numbers(void)
{
	int x = 0;
	int y;

	while (x < 10)
	{
		y = 0;
		while (y < 15)
		{

			if (y > 9)
			{
				_putchar(y / 10 + '0');
			}
			_putchar(y % 10 + '0');


			y++;
		}
		_putchar('\n');

		x++;
	}

}
