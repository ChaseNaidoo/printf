#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - function that produces output according to a format.
 *
 * @format: input character string.
 *
 * Return: the number of characters printed.
 *
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	char *s;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
	if (*format == '%')
		{
		format++;

		switch (format[i])
		{
		case 'c':
		_putchar(va_arg(args, int));
		len++;
		break;

		case 's':
		{
		s = va_arg(args, char *);
		while (*s != '\0')
			{
			_putchar(*s);
			s++;
			len++;
			}
			break;
		}
		
		case '%':
		putchar('%');
		break;
		

		default:
		_putchar(*format);
		break;
		}
	}
	else
	{
	_putchar(*format);
	}
	format++;
	}
	va_end(args);
	return (len);
}
