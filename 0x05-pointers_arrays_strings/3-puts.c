#include "holberton.h"
/**
  * _puts - function prints string
  * @str: pointer char type
  * Return: a
  */
void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}

	_putchar('\n');

}
