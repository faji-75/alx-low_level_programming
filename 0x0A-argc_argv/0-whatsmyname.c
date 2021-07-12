#include <stdio.h>
/**
  * main - function rename it self
  * @argc: int type
  * @argv: char type
  * Return: return 0
  */
int main(int argc, char *argv[])

{
	int i;

	i = argc - 1;
	printf("%s\n", argv[i]);

	return (0);
}
