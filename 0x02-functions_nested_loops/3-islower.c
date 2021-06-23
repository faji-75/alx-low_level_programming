#include "holberton.h"
/**
 * _islower - function that checks for lowercase character.
 * @c: char type 
 * Return: 1 for lowercase otherwise 0.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
