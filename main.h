#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - Struct for print functions
 *
 * @format_specifier: string representing the format specifier
 * @handler: function pointer to the correct print function for the format specifier.
 *
 */
typedef struct print
{
	const char *format_specifier;
	int (*handler)(va_list, char *, unsigned int);
}	print_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
