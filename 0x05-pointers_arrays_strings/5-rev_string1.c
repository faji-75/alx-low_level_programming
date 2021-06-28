#include "holberton.h"
/**
  * rev_string - function prints string
  * @s: pointer char type
  * Return: no return value
  */
void rev_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	do {
		_putchar(s[a]);
		a--;
	} while (a >= 0);



	_putchar('\n');

}
