#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * format_specifier - prints the format specifier
 *
 * @specifier: pointer to the format specifier
 * @args: list of arguments
 * @buffer: pointer to the output buffer
 *
 * Return: number of characters printed
 *
 */
int format_specifier(const char *specifier, va_list args, char *buffer)
{
	int len = 0;

	while (*specifier && (*specifier == 'c' || *specifier == 's' || *specifier == '%'))
	{
	if (*specifier == 'c')
	len += print_char(args, buffer, len);
	else if (*specifier == 's')
	len += print_str(args, buffer, len);
	else if (*specifier == '%')
	len += print_pct(args, buffer, len);
	specifier++;
	}
	return (len);
}
