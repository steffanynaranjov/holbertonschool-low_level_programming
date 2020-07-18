#include "variadic_functions.h"
/**
* print_char - print char c
* @vlist: The argument
*
*/
void print_char(va_list vlist)
{
printf("%c", va_arg(vlist, int));
}
/**
* print_int - print int c
* @vlist: The argument
*
*/
void print_int(va_list vlist)
{
printf("%i", va_arg(vlist, int));
}
/**
* print_float - print float c
* @vlist: The argument
*
*/
void print_float(va_list vlist)
{
printf("%f", va_arg(vlist, double));
}
/**
* print_str - print a string
* @vlist: The argument
*
*/
void print_str(va_list vlist)
{
char *str = va_arg(vlist, char *);
if (!str)
{
printf("(nil)");
return;
}
printf("%s", str);
}
/**
* print_all - print all  c
* @format: The format
*
*/
void print_all(const char * const format, ...)
{
op_t list_op[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_str},
{NULL, NULL}
};
char *s_format = (char *) format;
char *separator = "";
va_list vlist;
int x = 0;

va_start(vlist, format);

while (format && *s_format)
{
x = 0;

while (list_op[x].op)
{
if (list_op[x].op[0] == *s_format)
{
printf("%s", separator);
list_op[x].funct(vlist);
separator = ", ";
}

x++;
}

s_format++;
}

va_end(vlist);
printf("\n");
}
