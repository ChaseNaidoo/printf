#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
  int i;
  va_list args;
  va_start(args, format);

  format_t formats[] = {
			{'c', print_char},
			{'s', print_str},
			{'%', print_pct},
			{0, NULL}
  };

  int count = 0;
  while (*format)
    {
      if (*format == '%')
	{
	  format++;
	  for (i = 0; formats[i].format != 0; i++)
	    {
	      if (*format == formats[i].format)
		{
		  count += formats[i].func(args);
		  break;
		}
	    }
	  if (formats[i].format == 0)
	    {
	      if (write(1, "%", 1) == -1)
		return (-1);
	      count++;
	      format--;
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

  return count;
}
