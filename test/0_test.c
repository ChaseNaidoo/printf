#include "main.h"
#include <stdio.h>

/**
 * main - test for _printf functionality.
 *
 * Return: 0 (success)
 *
 */
int main(void)
{

	_printf("Test Passed.\n");
	printf("Test Passed.\n");

	return (0);
}

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
  va_list args;

  va_start(args, format);

  while (format != NULL && format [i] != '\0')
    {
      if (format[i] == '%')
	format++;
      
      switch (format[i])
	{
	case 'c':
	  _putchar(va_arg(args, int));
	  len++;
	  break;

	default:
	  break;
	}
      i++;
    }
  va_end(args);
  return (len);
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
