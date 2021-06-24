#include "holberton.h"
/**
  * _isupper - function that checks for uppercase char.
  * @c: char type.
  * Returns 1 for upper otherwise 0.
  */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
