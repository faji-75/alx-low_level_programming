#include "holberton.h"

/**
  * _strncat - function appends the src string to the dest string
  * @dest: char type
  * @src: char type
  * Return: returns dest
  */
char *_strncat(char *dest, char *src, int n)
{
	char *x;
	char *y;
	int a = 0;
	int b;

	x = dest;
	y = src;

	while (*x != '\0')
	{
		dest[a] = *x;
		x++;
		a++;
	}


	dest[a] = ' ';
	b = a + n;

	
	while (*y != '\0' && a < b)
	{
		dest[a] = *y;
		y++;
		a++;
	}

	if (a < b)
	{
	dest[a] = '\0';
	}
	return (dest);
}
