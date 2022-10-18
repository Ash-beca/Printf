#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

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

