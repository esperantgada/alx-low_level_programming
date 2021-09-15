#include "main.h"

/**
*print_times_table - prints the  times table with
*parameter
*@n: parameter
*Return: returns nothing
*/

void print_times_table(int n)
{
	int d, m, r;

	if (n <= 15 && n >= 0)
	{

		for (d = 0; d <= n; d++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				r = d * m;

				if (r <= 99)
				{
					_putchar(' ');
				}

				if (r <= 9)
				{
					_putchar(' ');
				}

				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar((r / 10) % 10 + '0');
				}
				else if (re <= 99 && r >= 10)
				{
					_putchar((r / 10) + '0');
				}
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
