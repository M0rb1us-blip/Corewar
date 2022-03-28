/*
** EPITECH PROJECT, 2020
** %s
** File description:
** my_printf
*/

#include "include/my.h"

void modulo_s(va_list *flags)
{
    char *results = va_arg(*flags, char *);
    my_putstr(results);
}
