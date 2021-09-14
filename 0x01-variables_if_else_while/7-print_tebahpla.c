#include <stdio.h>
#include <ctype.h>

/**
*main - Program to print alphabet letters in reverse followed by new line
*
*Return: return 0
*/

int main(void)
{
	int l;

	for (l = 'z'; l >= 'a' ; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
