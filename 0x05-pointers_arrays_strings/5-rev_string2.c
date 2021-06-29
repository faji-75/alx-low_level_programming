#include "holberton.h"
/**
  * rev_string - function prints string
  * @s: pointer char type
  * Return: no return value
  */
void rev_string(char *s)
{
int b = 1;
char *c = s;
while (*c != '\0')
{
	c++;
}


	while (*c >= 0)
{
	s[b] = *(c + 8);
	c--;
}
}
