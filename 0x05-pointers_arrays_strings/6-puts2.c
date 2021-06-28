#include "holberton.h"
/**
  * puts2 - function prints every other character of a string
  * @str: char type
  * Return: no return
  */

void puts2(char *str)
{
	int i = 0, j = 0;


	while (*(str + i) != '\0')
	{
		i++;
	}
	i = i / 2;

	while (i  > 0)
	{
		_putchar(*(str + j));
		j = j + 2;
		i--;
	}
	_putchar('\n');
}
