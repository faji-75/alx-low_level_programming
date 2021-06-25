#include <stdio.h>
/**
  * main - function that prints from 1 to 100 with fizzbuzz
  * Return: returns 0
  */

int main(void)
{
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";
	int i;
	int a = 1;

	while (a < 101)
	{
		i = 0;

		if (a % 3 == 0 && a % 5 == 0)
		{
			while (fizzbuzz[i] != '\0')
				putchar(fizzbuzz[i++]);
		}
		else if (a % 3 == 0)
		{
			while (fizz[i] != '\0')
				putchar(fizz[i++]);
			}
		else if (a % 5 == 0)
		{
			while (buzz[i] != '\0')
				putchar(buzz[i++]);
		}
		else
		{
			if (a > 9)
			{
				putchar(a / 10 + '0');
			}
			putchar(a % 10 + '0');
		}
		if (a < 100)
			putchar(' ');

		a++;
	}
	putchar('\n');
	return (0);
}
