#include "main.h"
#include <stdio.h>

/**
 * main - test for _printf functionality.
 *
 * Return: 0 (success)
 *
 */
int main (void)
{
	int c1;
	int c2;

	c1 = _printf("Test Passed.\n");
	c2 = printf("Test Passed.\n");

	return (0);
}
