#include "holberton.h"
/**
  * puts2 - function prints every other character of a string
  * @str: char type
  * Return: no return
  */

void puts2(char *str)
{
	int i = 0;

	_putchar(*str);
	i++;
	while (*(str + i) != 0)
	{
		i++;
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
