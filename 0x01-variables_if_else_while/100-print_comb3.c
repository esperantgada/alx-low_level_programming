#include <stdio.h>
/**
*main - Prints all combinations of two digits with,
* and space followed by new line
*
*Return: returns 0
*/
int main()
{
    int n,m;

    for (n = 0; n <= 9; n++)
    {
        for (m = n + 1; m <= 9; m++)
        {
            putchar(n + '0');
            putchar(m + '0');

            if (n == 8 && m == 9)
            {
                continue;
            }
            putchar(';');
            putchar(' ');
        }


    }
    
    putchar('\n');

    return (0);
}
