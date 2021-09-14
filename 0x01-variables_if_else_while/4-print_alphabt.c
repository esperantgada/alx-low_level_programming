#include <stdio.h>
#include <ctype.h>

/**
*main - Program to print alphabet letters except q and e followed by new line
*
*Return: return 0
*/

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z' ; l++)
	{
		if (l == 'q' || l == 'e')
		{
			continue;
		}
		putchar(l);
	}
	putchar('\n');
	return (0);
}
