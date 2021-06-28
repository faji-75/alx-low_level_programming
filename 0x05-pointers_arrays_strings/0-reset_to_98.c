#include "holberton.h"
/**
  * reset_to_98 - function which rest the valu of n to 98.
  * @n: integer type.
  */
void reset_to_98(int *n)
{
	int *p;

	p = &n;

	*p = 98;
}
