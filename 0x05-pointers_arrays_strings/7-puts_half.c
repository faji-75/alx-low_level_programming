#include "holberton.h"
/**
  * puts_half - function prints every other character of a string
  * @str: char type
  * Return: no return
  */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		i++;
	}
	i++;
	if (i % 2 > 1)
	{
		i = i - 1;
	}

	i = i / 2;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
