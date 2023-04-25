#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - print formatted output to the console
 *
 * @format: format string that specifies how to print the output
 * Return: the number of characters printed, or -1 on error
 *
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int (*print_func)(va_list);
	va_list args;

	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{
	format++;
	print_func = get_print_func(format);
	if (print_func != NULL)
	{
	count += print_func(args);
	}
	else
	{
	if (write(1, "%", 1) == -1)
	{
	return (-1);
	}
	count++;
	}
	}
	else
	{
	if (write(1, format, 1) == -1)
	{
	return (-1);
	}
	count++;
	}
	format++;
	}

	va_end(args);

	return (count);
}
