#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - function that produces output according to a format.
 *
 * @format: input character string.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int len = 0, char_printed = 0;
	char *buf;
	va_list args;

	buf = malloc(1024);

	if (!buf)
	return (-1);

	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{
	len += format_specifier(format++, args, buf + len);
	format += specifier_len(format);
	continue;
	}

	buf[len++] = *format++;

	if (len == 1023)
		{
		buf[len] = '\0';
		char_printed += write(1, buf, len);
		len = 0;
		}
	}

	buf[len] = '\0';
	char_printed += write(1, buf, len);
	va_end(args);
	free(buf);
	return (char_printed);
}
