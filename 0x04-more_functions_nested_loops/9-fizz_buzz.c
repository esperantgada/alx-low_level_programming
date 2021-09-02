#include <stdio.h>

/**
 *main - prints numbers from 0 to 100 with words
 *
 *Return: return 0
*/


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("fizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}

		printf("%d ", i);

	}
	printf("\n");

	return (0);
}
