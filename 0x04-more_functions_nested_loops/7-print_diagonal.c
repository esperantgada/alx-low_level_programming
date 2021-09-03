#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal
 *
 *Return: no retur value
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
