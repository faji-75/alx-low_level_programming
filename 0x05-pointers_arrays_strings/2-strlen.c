#include "holberton.h"
/**
  * _strlen - function returns the length of a string
  * @s: pointer char type
  * Return: a
  */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}

	return (a);

}
