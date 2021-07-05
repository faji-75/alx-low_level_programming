#include "holberton.h"

/**
  * _memcpy- function copies n bytes from memory area
  * @dest: memory to be copied on
  * @src: memory to be copied from
  * @n: number of bytes frommemory
  *
  * Return: pointer to memory area dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

