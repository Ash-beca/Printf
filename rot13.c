#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _rot13 - prints rot13'ed string
 * @rot: list being passed
 * Return: count of chars
 */

int _rot13(va_list rot)
{
	int i, count;
	char *c;

	i = count = 0;
	c = va_arg(rot, char *);

	if (s == NULL)
		return (-1);

	while (s[i] != '\0')
	{
		if ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
		{
			if ((c[i] >= 'n' && c[i] <= 'z') || 
			   (c[i] >= 'N' && c[i] <= 'Z'))
				count = count + _putchar(c[i] - 13);
			else
				count = count + _putchar(c[i] + 13);
		}
		else
			count = count + _putchar(c[i]);
		i++;
	}
	return (count);
}
