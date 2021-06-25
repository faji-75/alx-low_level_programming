#include <stdio.h>
/**
  *
  *
  */
int main(void)
{
	long a = 612852475143;
	long b = 2;
	long c;




	while (a % b > 0)
	{ 
		b++;
	}
	c = a / b;

	printf("%lu\n", c);
	return (0);
}
