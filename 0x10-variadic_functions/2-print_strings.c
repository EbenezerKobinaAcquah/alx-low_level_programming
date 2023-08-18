#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints string, then a new line.
 * @separator: The string that separates two strings.
 * @n: The total number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) should be printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *stri;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		stri = va_arg(strings, char *);

		if (stri == NULL)
			printf("(nil)");
		else
			printf("%s", stri);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
