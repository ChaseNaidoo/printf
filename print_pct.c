#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int print_pct(va_list args __attribute__((unused)))
{
	return write(1, "%", 1);
}
