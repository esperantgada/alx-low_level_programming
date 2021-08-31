#include "main.h"

/**
<<<<<<< HEAD
 *print_alphabet - Print alphabet in lowercase
 *print te times
 *desc: The function uses nested for loop
=======
 *print_alphabet - Print alphabet in lowercase ten times
 *
>>>>>>> 63af7cf48ee528a5cf93b0aa6f74d1e29b41e599
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
