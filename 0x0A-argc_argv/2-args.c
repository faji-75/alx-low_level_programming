#include <stdio.h>
/**
  * main - prints number of arguments
  * @argc: int type
  * @argv: char type
  * Return: returns zero
  */
int main (int argc, char *argv[])
{
	int i = 0;
	while ( i < argc)
	{
		
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);

}
