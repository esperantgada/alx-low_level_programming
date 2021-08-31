#include "main.h"

/**
 *print_alphabet - Print alphabet in lowercase
 *print te times
 *desc: The function uses nested for loop
 *Return: no return
*/

void print_alphabet(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}

	return (0);
}
