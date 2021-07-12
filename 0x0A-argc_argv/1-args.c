#include <stdio.h>

int main (int argc, char __attribute__((__unused__))*argv[])
{
	int count;


	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
		}
		count--;	
		printf("%d\n", count);
		
	}
	else
	{
		printf("%d\n", 0);
	}

	return 0;
}
