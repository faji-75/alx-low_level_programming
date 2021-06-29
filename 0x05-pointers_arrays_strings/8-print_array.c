#include <stdio.h>
#include "holberton.h"
/**
  * print_array - function prints array
  * @a: int type
  * @n: int type
  * Return: no return value
  */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
