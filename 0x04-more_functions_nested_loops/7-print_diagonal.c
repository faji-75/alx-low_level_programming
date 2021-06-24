#include "holberton.h"
/**
  * print_diagonal - functin which print n line of diagonal.
  * @n: inte type.
  * No return value.
  */
void print_diagonal(int n)
{
	int a = 1;
	int b = 0;

	while (n > 0)
	{
		b = a;
		_putchar(92);
		n--;
		if (n > 0)
		{
		_putchar('\n');
		while (b > 0)
		{
		_putchar(32);
		b--;

		}


		}
		a++;
	}
	_putchar('\n');


}
