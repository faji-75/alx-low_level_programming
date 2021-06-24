#include "holberton.h"
/**
  * _isdigit - function that checks for number 0 through 9.
  * @c: char type.
  * Returns 1 for upper otherwise 0.
  */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
