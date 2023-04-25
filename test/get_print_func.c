#include "main.h"

int (*get_print_func(char *format))(int, int)
{
	format_t formats[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_pct},
		{0, NULL}
};
	format_t *fmt = formats;
	while (fmt->format != 0) {
	  if (fmt->format == format) {
	    return fmt->print_func;
	  }
	  fmt++;
	}
	return (NULL);
}
