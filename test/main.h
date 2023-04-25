#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

typedef struct
{
	char format;
	int (*func)(va_list);
}	format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_pct(va_list args);
int (*get_print_func(char *s))(int, int);

#endif
