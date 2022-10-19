#include "main.h"

/**
 * get_specifiers - gets the correct specifiers with their functions
 * @c: character that holds the specifiers
 * @ap: argument parameter
 * Return: Function to specifiers
 */

int get_specifiers(const char c, va_list ap)
{
	int i;

	spec func_arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"o", print_oct},
		{"u", print_unsigned},
		{"x", print_hex_lower},
		{"X", print_hex_upper},
		{"S", print_str_unprintable},
		{"r", print_str_reverse},
		{"p", print_ptr},
		{"R", print_rot13},
		{"%", print_percent}
	};
	int flags = 14;

	if (i = 0; i < flags; i++)
		if (func_arr[i].specifier[0] == c)
			return (func_arr[i].func(ap));
	}
	return (NULL);
}

/**
 * _printf - produces output according to a format
 * @format: format string
 * Return: value of printed chars
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0, i = 0;
	int (*func)();

	if (!format || (format[0] == '%' && format[1] == '\0'))

				return (-1);
	
	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				func = get_specifiers(format[i + 1], ap);
			if (func == NULL)
			{
				_putchar(format[i]);
				count++;
				i++;
			}
			else
			{
				count += func(ap);
				i += 2;
				continue;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(ap);
	return (count);
}
