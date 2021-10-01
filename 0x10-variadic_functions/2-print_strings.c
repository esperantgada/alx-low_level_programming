#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - prints strings
* @separator: string to be printed between the strings
* @n: strings to be printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *v;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		v = va_arg(ap, char*);

		if (v != NULL)
		{
			printf("%s", v);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
