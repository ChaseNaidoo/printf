#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * my_printf - prints formatted output
 * @format: format string
 *
 * Return: number of characters printed
 */
void my_printf(const char *format, ...)
{
	va_list args;
	char *p;

	va_start(args, format);

	p = (char *)format;
	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
				case 'u':
					printf("%u", va_arg(args, unsigned int));
					break;
				case 'o':
					printf("%o", va_arg(args, unsigned int));
					break;
				case 'x':
					printf("%x", va_arg(args, unsigned int));
					break;
				case 'X':
					printf("%X", va_arg(args, unsigned int));
					break;
				default:
					putchar(*p);
					break;
			}
		}
		else
		{
			putchar(*p);
		}
		p++;
	}

	va_end(args);
}
