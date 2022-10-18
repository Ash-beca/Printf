#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_print - select function for conversion char
 * @c: char to check
 * Return: pointer to function
 */

int (*get_print(const char c))(va_list)
{
	int i = 0;

	flags_t ft[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_nbr},
		{"d", print_nbr},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hexa_lower},
		{"X", print_hexa_upper},
		{"u", print_unsigned},
		{"S", print_str_unprintable},
		{"r", print_str_reverse},
		{"p", print_ptr},
		{"R", print_rot13},
		{"%", print_percent}
	};
	while (i < 14)
	{
		if (c == fp[i].c[0])
		{
			return (ft[i].f);
		}
		i++;
	}
	return (NULL);
}

/**
 * _printf - produces output according to a format
 * @format - valid format specifier
 * @get_print - functions that will be called during conversion
 * @args: arguments
 * @flag_t: flags
 * Return: number of characternto printing
 *
 */

int _printf(const char *format, va_list args, flag_t);
{
	int (*func), i = 0
	const char *c;
	flag_t ft = {0, 0, 0};

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == " " && !format[2])
		return (-1);

	for (c = format; *c; c++)
	{
		if (*c == '%')
		{
			i += _putchar('%')
				continue;
		}
		while (get_flag(*c, &ft))
			c++;
		func = get_print(*c);
		i += (func)
			? func(args, &ft)
			: _printf("%%%c", *c);
	}
	else
		i += _putchar(*c);
}
_putchar(-1);
ca_end(args);

return (i);
}

