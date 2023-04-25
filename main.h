#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct format - defines a format structure
 *
 * @format: the format specifier character
 * @print_func: a pointer to a function that takes a va_list and returns an int
 * Description: Maps format specifier characters to corresponding functions.
 */

typedef struct format
{
	char format;
	int (*print_func)(va_list);
}	format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_pct(va_list args);
int print_int(va_list args);
int (*get_print_func(const char *format))(va_list);
int print_binary(va_list args);
int print_string(va_list args);
int print_hex(unsigned char c, int size);

#endif
