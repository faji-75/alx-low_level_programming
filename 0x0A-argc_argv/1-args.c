#include <stdio.h>
/**
  * main - prints number of arguments
  * @argc: int type
  * @argv: char type
  * Return: returns zero
  */
int main (int argc, char __attribute__((__unused__))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
