/**
* _atoi - converts a string to an int
* @s: the string to be converted
*
* Return: the converted value
*/
int _atoi(char *s)
{
	int i = 1;
	int n = 0;

	do {
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}

	} while (*s++);

	return (n * i);
}
