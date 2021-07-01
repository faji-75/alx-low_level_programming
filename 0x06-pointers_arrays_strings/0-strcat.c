#include "holberton.h"

/**
  * _strcat - function appends the src string to the dest string
  * @dest: char type
  * @src: char type
  * Return: returns dest
  */
char *_strcat(char *dest, char *src)
{
	char *x;
	char *y;
	int a = 0;

	x = dest;
	y = src;

	while (*x != '\0')
	{
		dest[a] = *x;
		x++;
		a++;
	}


	dest[a] = ' ';


	while (*y != '\0')
	{
		dest[a] = *y;
		y++;
		a++;
	}

	a++;
	dest[a] = '\0';

	return (dest);
}
