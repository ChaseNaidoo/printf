#include <stdarg.h>
#include <unistd.h>

/**
 * print_int - Prints an integer to stdout
 *
 * @args: A va_list containing the integer to print
 *
 * Return: The number of characters printed, or -1 if an error occurs
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	char sign = '+';

	if (n < 0)
	{
		sign = '-';
		n = -n;
	}
	if (n == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		count++;
	}
	else
	{
		char buf[32];
		int i = 0;

		while (n != 0)
		{
			buf[i++] = '0' + (n % 10);
			n /= 10;
		}
		if (sign == '-')
		{
			if (write(1, "-", 1) == -1)
				return (-1);
			count++;
		}
		while (i > 0)
		{
			if (write(1, &buf[--i], 1) == -1)
				return (-1);
			count++;
		}
	}
	return (count);
}
