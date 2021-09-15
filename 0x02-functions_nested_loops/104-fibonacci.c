#include <stdio.h>

/**
*main - prints out first 98
*fibonacci suit numbers
*Return: return 0
*/

int main(void)
{
	int i;

	unsigned long n1 = 0, n2 = 1, n3;
	unsigned long m, l, s, p;
	unsigned long h1, h2;

	for (i = 0; i < 92; i++)
	{
		n3 = n1 + n2;

		printf("%lu, ", n3);

		n1 = n2;
		n2 = n3;
	}
	m = n1 / 10000000000;
	s = n2 / 10000000000;
	l = n1 % 10000000000;
	p = n2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		h1 = m + s;
		h2 = s + p;

		if ((l + p) > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);

		if (i != 98)
		{
			printf(", ");
		}

		m = s;
		l = s;
		s = h1;
		p = h2;
	}
	printf("\n");
	return (0);
}
