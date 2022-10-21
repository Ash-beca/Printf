#include "main.h"

/**
 * get_size - Calculates the size of an argument
 * @format: Formatted string in which the arguments are printed
 * @i: List of arguments to be printed.
 * Return: Precision.
 */

int get_size(const char *format, int *i)
{
	int k = *i + 1;
	int size = 0;

	if (format[k] == 'l')
		size = S_LONG;
	else if (format[k] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = k - 1;
	else
		*i = k;

	return (size);
}
