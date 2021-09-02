#include "main.h"

/**
 *print_most_numbers - prints digits from 0 to 9 excepted 2 and 9
 *
 *Return: No return value
*/

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}

		_putchar(i);
	}
	_putchar('\n');
}
