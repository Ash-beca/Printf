#include "main.h"

/**
 * print_string - loops through a string and prints every character
 * @ap: va_list arguments from _printf
 * Return: number of char printed
 */
int print_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i = 0;
	
	if (!s)
	{
		i += _puts("(null)", 0);
		return (i);
	}

	return (_puts(s, 0));
}

/**
 * print_char - prints a character
 * Return: number of char printed
 */
int print_char(va_list ap)
{

	char c = va_arg(ap, int);

	if (c == '\0')
	{
		return (write(1, &c, 1));
	}
	_putchar(c);
	return (1);
}

/**
 *  print_str_unprintable - unprint some characters
 *  @ap: arg list
 *  Return: number of printed char
 */

int print_str_unprintable(va_list ap)
{
	char *c = va_arg(ap, char *);
	int i = 0;

	if (!c)
	{
		i += _puts("(null)", 0);
		return (i);
	}
	return (_puts(c, 1));
}
