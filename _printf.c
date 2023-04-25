#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: the format string
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char buffer[1024];
	int (*handler)(va_list, char*, unsigned int);
	va_list args;

	va_start(args, format);

	while (*format)
	{
      if (*format == '%')
	{
	  format++;
	handler = print_func(format);
	  if (handler == NULL)
	    {
	      if (write(1, "%", 1) == -1)
		return (-1);
	      count++;
	    }
	  else
	    {
	      format = handle_specifier(format, handler, args, buffer, &count);
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
