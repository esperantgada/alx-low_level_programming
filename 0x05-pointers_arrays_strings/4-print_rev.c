#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*Return: return a string
*/

void print_rev(char *s)
{
	int len = 0, i = 0;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}


/**
 * _strlen - return the length of the string
 *@s: char type pointer
 *Return: length of string
 */
int _strlen(char *s)
{
	int i, compt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		compt++;
	}
	return (compt);

}
