#include "main.h"

/**
 *print_alphabet - Print alphabet in lowercase
 *
 *Return: no return
*/

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
