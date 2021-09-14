#include <stdio.h>
#include <ctype.h>

/**
*main - Program to print alphabet letters in all cases followed by new line
*
*Return: return 0
*/

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z' ; l++)
	{
		l = tolower(l);
		putchar(l);

		if (l == 'z')
		{
			l = 'A';

			for (; l <= 'Z'; l++)
			{
				putchar(l);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
