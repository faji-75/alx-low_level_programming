#include <holberton.h>
/**
  * swap_int - function to swap to integers
  * @a: int type
  * @b: int type
  */
void swap_int(int *a, int *b)
{
	int *x;
	int *y;
	int c;

	x = &a;
	y = &b;

	c = a;
	*x = b;
	*y = c;
}
