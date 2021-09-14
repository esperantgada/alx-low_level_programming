#include <stdio.h>

/**
*main - Prints all combinations of three digits with,
* and space followed by new line
*
*Return: returns 0
*/

int main(void)
{
    int n, m, d;

    for (n = 0; n <= 9; n++)
    {
        for (m = n + 1; m <= 9; m++)
        {
            for (d = m + 1; d <= 9; d++)
            {
                putchar(n + '0');
                putchar(m + '0');
                putchar(d + '0');

                if (n == 7 && m == 8 && d == 9)
                {
                    continue;
                }
                putchar(',');
                putchar(' ');
            }
        }


    }

    putchar('\n');

    return (0);
}
