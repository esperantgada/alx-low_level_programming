#include "main.h"

/**
 *print_alphabet - Print alphabet in lowercase
 *print ten times
 *desc: The function uses nested for loop
 *Return: no return
*/

void print_alphabet(void)
{
	int j, i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
