#include "main.h"
#include <stdio.h>
/**
*print_to_98 - prints natural
*numbers from n to 98
*@n:integer to start by
*return: returns nothing
*/
void print_to_98(int n)
{
	int m;
	int x = 98;

	if (n <= 98)
	{
		for (m = n; m < 98; m++)
		{
			printf("%d, ", m);

		}
		printf("%d", x);
		printf("\n");

	}
	else
	{

		for (m = n; m > 98; m--)
		{
			printf("%d, ", m);

		}
		printf("%d", x);
		printf("\n");
	}
}
