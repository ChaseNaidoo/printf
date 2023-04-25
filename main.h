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
	char *format_char;
	int (*handler)(va_list, char *, unsigned int);
}	print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*print_func(const char *s))(va_list, char *, unsigned int);
const char *handle_specifier(const char *format, int (*handler)(va_list, char *, unsigned int), va_list args, char *buffer, int *count);
int print_char(va_list args, char *buffer, unsigned int buffer_index);
int print_str(va_list args, char *buffer, unsigned int buffer_index);
int print_pct(va_list args __attribute__((unused)), char *buffer, unsigned int buffer_index);

#endif
