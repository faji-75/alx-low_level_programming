 #include "holberton.h"

/**
  * reverse_array - reverses the contents of an array
  * @a: integer array to be reversed
  * @n: length of array a
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int c;

	x = 0;
	y = n - 1;
	

	while (x < y)
	{
		c = *(a + x);
		*(a + x) = *(a + y);
		*(a + y) = c;
		x++;
		y--;
	}
}
