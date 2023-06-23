#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints variable number of strings
 * @seperator: character(s) to seperate each string
 * @n: number of arguments 
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string = NULL;
	va_list strings;

	va_start(strings, n);
	while (i < n)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		
		if (seperator != NULL && i != (n - 1))
			printf("%s", seperator);
		i++;
	}
	printf("\n");
}
