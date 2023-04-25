#include "main.h"
#include <stdlib.h>

int (*get_print_func(const char *format))(va_list)
{
	format_t formats[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pct},
		{0, NULL}
};

	int i;

	for (i = 0; formats[i].format != 0; i++)
	{
		if (formats[i].format == *format)
		{
		  return (formats[i].print_func);
		}
	}
	return (NULL);
}
