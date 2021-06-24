#include "holberton.h"
/**
  * print_line - functin which print n number of lines.
  * @n: inte type.
  * No return value.
  */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}

