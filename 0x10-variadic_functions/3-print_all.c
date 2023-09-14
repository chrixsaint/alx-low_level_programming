#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *sep = "";
	int i = 0;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
				sep = ", ";
				break;
		}
	}
	printf("\n");

	va_end(args);
}
