/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "include/my.h"
#include <stdio.h>

int medium_printf(char *format, int i, char *tableau_flags, va_list *flags)
{
    void (*list_fonction[12])(va_list*) = {modulo_c, modulo_s, modulo_int, \
modulo_int, modulo_o, modulo_x, modulo_x_uppercase, modulo_u, modulo_p, \
modulo_percent, modulo_b, modulo_s_uppercase};
    int results;

    if (format[i] == '%' && format[i + 1] == '#') {
        i += 2;
        put_hashtag(format[i]);
        results = search_flags(format[i], tableau_flags);
        if (results != 84)
            list_fonction[results](flags);
        else
            print_bad_flags(format, i);
    }
    else
        my_putchar(format[i]);
    return (i);
}

int easy_printf(char *format, int i, char *tableau_flags, va_list *flags)
{
    void (*list_fonction[12])(va_list*) = {modulo_c, modulo_s, modulo_int, \
modulo_int, modulo_o, modulo_x, modulo_x_uppercase, modulo_u, modulo_p, \
modulo_percent, modulo_b, modulo_s_uppercase};
    int results;

    if (format[i] == '%' && format[i + 1] != '\0' && format[i + 1] != '#') {
        i++;
        results = search_flags(format[i], tableau_flags);
        if (results != 84)
            list_fonction[results](flags);
        else
            print_bad_flags(format, i);
    }
    else if (format[i] == '%' && format[i + 1] == '#')
        i = medium_printf(format, i, tableau_flags, flags);
    else
        my_putchar(format[i]);
    return (i);
}

int my_printf(char *format, ...)
{
    va_list flags;
    void (*list_fonction[12])(va_list*) = {modulo_c, modulo_s, modulo_int, \
modulo_int, modulo_o, modulo_x, modulo_x_uppercase, modulo_u, modulo_p, \
modulo_percent, modulo_b, modulo_s_uppercase};
    char tableau_flags[13] = {'c', 's', 'i', 'd', 'o', 'x', 'X', 'u', 'p', \
'%', 'b', 'S', '0'};
    int results;
    int i;

    va_start(flags, format);
    for (i = 0; format[i] != '\0'; i++) {
        i = easy_printf(format, i, tableau_flags, &flags);
    }
    va_end(flags);
    return (0);
}