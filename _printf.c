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
 *
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	int char_printed = 0;
	char *s, *buf;
	va_list args;

	buf = malloc(1024);

	if (!buf)
	{
	return (-1);
	}
	
	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
	if (format[i] == '%')
		{
		  len += format_specifier(&format[i + 1], buf + len, &args);
		  i += specifier_len(&format[i + 1]);
		  continue;
		}

	buf[len++] = format[i];

	if (len == 1023)
	  {
	    buf[len] = '\0';
	    char_printed += write(1, buf, len);

	    va_end(args);
	    free(buf);
	  
	return (char_printed);
}
