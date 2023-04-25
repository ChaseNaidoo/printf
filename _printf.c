#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints output according to a format
 *
 * @format: the format string
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 *
 */
int _printf(const char *format, ...)
{
	int count;
	va_list args;
	va_start(args, format);

	count = 0;

	while (*format)
	{
	if (*format == '%')
	{
		format++;

		switch (*format)
		{
		case 'c':
		{
		char c = va_arg(args, int);
		if (write(1, &c, 1) == -1)
		return (-1);
		count++;
		break;
		}

		case 's':
		{
		char *str = va_arg(args, char*);
		while (*str)
		{
		if (write(1, str, 1) == -1)
		return (-1);
		str++;
		count++;
		}
		break;
		}

		case '%':
		{
		if (write(1, "%", 1) == -1)
		return (-1);
		count++;
		break;
		}

		default:
		{
		if (write(1, "%", 1) == -1)
		return (-1);
		count++;
		format--;
		break;
		}
		}
	}
	else
	{
	if (write(1, format, 1) == -1)
	return (-1);
	count++;
	}
	format++;
	}

	va_end(args);

	return (count);
}
