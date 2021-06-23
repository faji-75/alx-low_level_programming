#include "holberton.h"
/**
  * times_table - Print times table of nine
  * Description: Start from 00:00 to 23:59
  */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int z;
	while (x <= 9)
	{
		while (y <= 9)
		{
			z = x * y;
			_putchar(z);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
