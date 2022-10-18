#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * get-print - checkes which specifier to print
 * @format:character and specifiers
 * @ch: character that holds the conversion specifier
 * func_arr: array to struct ops
 * @args: arguments
 *Return : char to be printed
 */

int get_print(const char *format)(va_list args, flags_t *func_arr)
{
	char ch;
	int x = 0, y = 0, z = 0;

	a = format[b];
	while (ch != '\0')
	{
		if (ch == '%')
		{
			z = 0;
			y++;
			ch = format[y];

			while (func_arr[z].type != NULL && 
				ch != *(func_arr[z].type))
				z++;
			if (func_arr[z].type != NULL)
				x = x + func_arr[z].f(args);
			else
			{
				if (ch == '\0')
					return (-1);
				if (ch != '%')
					x += _putchar('%');
				x += _putchar(ch);
			}
		}
		else
			x += _puthcar(ch);
		y++;
		ch = format[y];
	}
	return (x);
}

/**
 * _printf - produces output according to a format
 * @format: string of characters and specifiers
 * Return: formatted output string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	
	specifier func_arr[] = {
		{"c", ch},
		{"s", str},
		{"d", _int},
		{"b", _bin},
		{"i", _int},
		{"u", _ui},
		{"o", _oct},
		{"x", _hex_l},
		{"X", _hex_u},
		{"R", _rot13},
		{NULL, NULL}
	};

	if (format == NULL)
		return (- 1);
	va_start(args, format);
	ch = get_print(format, gets, args);
	va_end(args);
	return (ch);
}
