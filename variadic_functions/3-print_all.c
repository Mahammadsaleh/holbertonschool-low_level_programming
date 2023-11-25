#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char argument
 * @args: The argument to print
 */
void print_char(va_list args)
{
    printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an int argument
 * @args: The argument to print
 */
void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float argument
 * @args: The argument to print
 */
void print_float(va_list args)
{
    printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string argument
 * @args: The argument to print
 */
void print_string(va_list args)
{
    char *str = va_arg(args, char *);

    if (str == NULL)
        str = "(nil)";

    printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0, j = 0;
    char *sep = "";
    char *valid_types = "cifs";
    void (*print_func[])(va_list) = {print_char, print_int, print_float, print_string};

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (valid_types[j])
	{
            if (format[i] == valid_types[j])
	    {
                printf("%s", sep);
                print_func[j](args);
                sep = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    printf("\n");
    va_end(args);
}

