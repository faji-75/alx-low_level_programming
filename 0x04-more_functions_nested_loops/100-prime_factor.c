#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0
  */
int main(void)
{
	long b = 2, a = 612852475143;

	while (b <= a)
	{
		if (a % b == 0)
		{
			a = a / b;
			b--;
		}
		b++;

	}
	printf("%lu\n", b);
	return (0);
}
