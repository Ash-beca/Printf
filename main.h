#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

 /**
  * struct specifier - struct to choose the right function depending
  * on the format specifier passed to _printf()
  * @c: flag string
  * @f: pointer function
  */

typedef struct specifier

{
		char c;
		int (*f)(va_list);
} spec;
