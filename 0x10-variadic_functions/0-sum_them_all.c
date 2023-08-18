#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all the given paramters.
 * @n: The total number of paramters passed to the function.
 * @...: A dynamic number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of al lthe parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list app;
	unsigned int i, sum = 0;

	va_start(app, n);

	for (i = 0; i < n; i++)
		sum += va_arg(app, int);

	va_end(app);

	return (sum);
}
