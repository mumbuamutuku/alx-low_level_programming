#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int index;
	va_list str;
    char *p;

	va_start(str, n);
	for (index = 0; index < n; index++)
	{
        p = va_arg(str, char *);
        if (str != NULL)
        	printf("%s", p);
        else
            printf("(nil)");
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
