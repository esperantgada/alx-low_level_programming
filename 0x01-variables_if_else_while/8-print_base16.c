#include <stdio.h>
#include <ctype.h>

/**
*main - Prints all single digits of base 16 followed by new line
*
*Return: returns 0
*/

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);

		if (d == '9')
		{
			d = 'a';

			for (; d <= 'f'; d++)
			{
				putchar(d);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
