#include "holberton.h"
/**
  * times_table - Print times table of nine.
  */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int z;

	while (x < 10)
	{
		
		while (y < 10)
		{
			{
			z = x * y;
			_putchar(z + '0');
		if (y < 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
			}
			y++;

		}
		_putchar('\n');

		x++;
	}
}
