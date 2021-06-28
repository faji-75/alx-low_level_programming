#include <holberton.h>



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
