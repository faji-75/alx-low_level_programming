#include "holberton.h"
/**
 * _islower - function that checks for lowercase character.
 * Return: 1 for lowercase otherwise 0.
 */

int _isalpha(int c)
{
	if (c > 64 && c <91)
		return (1);
	else if (c > 96 && c <123)
		return (1);
	else
		return (0);
}
