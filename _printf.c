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
	int len = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
<<<<<<< HEAD
	if (format[i] == '%')
	  {
	  i++;
=======
	if (*format == '%')
	  {
	format++;
>>>>>>> 4faf55db6143ee7d9bb22f73165984dcaee82a4c
	  
	switch (*format)
		{
		case 'c':
		_putchar(va_arg(args, int));
		len++;
		break;

		case 's': {
                    char* str = va_arg(args, char*);
                    while (*str != '\0') {
                        _putchar(*str);
                        str++;
                    }
                    break;

		default:
		  _putchar(*format);
		break;
		}
<<<<<<< HEAD
	  }
	else
	  {
	_putchar(format[i]);
	len++;
=======
		}
	  }
	else
	  {
	    _putchar(*format);
	  }
>>>>>>> 4faf55db6143ee7d9bb22f73165984dcaee82a4c
	}
	va_end(args);
	return (len);
}
