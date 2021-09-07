#include "main.h"
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: no return value
*/
void rev_string(char *s)
{
	int i = 0, l;

	l = _strlen(s) - 1;

	while (l > i)
	{
		swap_char(s + l, s + i);
		i++;
		l--;

	}
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




/**
 * swap_int - swap two characters
 * @a: char pointer type
 * @b: char pointer type
 */
void swap_char(char *a, char *b)
{
        char c;

	c = *a;
	*a = *b;
	*b = c;
}
