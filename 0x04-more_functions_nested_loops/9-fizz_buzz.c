#include <stdio.h>
/**
  * main - function that prints from 1 to 100 with fizzbuzz
  * Return: returns 0
  */

int main(void)
{
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	int i;
	int j;
	int a;

	a = 1;
	while (a < 101)
	{
		i = 0;
		j = 0;

		if (a % 3 == 0)
		{
			if (a % 5 == 0)
			{
				while (fizz[i] != '\0')
				{
					putchar(fizz[i]);
					i++;
				}

				while (buzz[j] != '\0')
				{
					putchar(buzz[j]);
					j++;
				}
			}
			else
			{
				while (fizz[i] != '\0')
				{
					putchar(fizz[i]);
					i++;
				}
			}
		}
		else if (a % 5 == 0)
		{
			while (buzz[j] != '\0')
			{
				putchar(buzz[j]);
				j++;
			}
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
