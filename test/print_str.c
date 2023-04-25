#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int print_str(va_list args)
{
	char *str = va_arg(args, char*);
	int count = 0;
	while (*str)
	{
	if (write(1, str, 1) == -1)
	return (-1);
	str++;
	count++;
	}
	return (count);
}
