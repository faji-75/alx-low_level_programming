#include "holberton.h"
/**
  * print_rev - function prints string
  * @s: pointer char type
  * Return: no return value
  */
void print_rev(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}

	if (a < 1)
	{
		
	}
	else
	{
	do {
		a--;
		_putchar(*(s + a));
	} while (a > 0);
	}


	_putchar('\n');

}
