#include "holberton.h"
/**
  * swap_int - function to swap to integers
  * @a: int type
  * @b: int type
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
