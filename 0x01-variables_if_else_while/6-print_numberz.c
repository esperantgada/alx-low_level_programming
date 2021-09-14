#include <stdio.h>
#include <ctype.h>

/**
*main - Prints all single digits of base 10 followed by new line
*
*Return: returns 0
*/

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
