#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints strings, floats, chars and ints
 * @format: format string of input data types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string = NULL;
	va_list args;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					printf("(nil)");

				printf("%s", string);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(args);
}
