#include "main.h"

/**
 *print_numbers - list digits from 0 to 9
 *
 *Return: no value
*/

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
