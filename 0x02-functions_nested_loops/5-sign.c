#include "holberton.h"
/**
 * print_sign - function give the sign.
 * @n: integert type.
 * Return: 1 for lowercase otherwise 0.
 */

int print_sign(int n)
{
	char f;
	if (n > 0)
	{
		f = '+';
		_putchar(f);
		return (1);
	}
	else if (n < 0)
	{
		f = '-';
		 _putchar(f);
		return (1);
	}
	else
	{	f = '0';
		 _putchar(f);
		return (0);
	}
}
