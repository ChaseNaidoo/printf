#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * handle_specifier - handles the format specifier passed to _printf
 *
 * @format: pointer to the format specifier character
 * @handler: pointer to the handler function to use
 * @args: arguments to _printf
 * @buffer: buffer to store output in
 * @count: pointer to the count of characters printed
 *
 * Return: pointer to the next format specifier character
 */
const char *handle_specifier(const char *format, int (*handler)(va_list, char *, unsigned int), va_list args, char *buffer, int *count)
{
  unsigned int len = 0;

  if (*format == '\0')
    return (format);

  if (*format == '%' && *(format + 1) == '\0')
    return (format);

  if (*format == '%')
    format++;

  len += handler(args, buffer, len);
  (*count) += len;

  return (format);
}
