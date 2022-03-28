/*
** EPITECH PROJECT, 2020
** %c
** File description:
** my_printf
*/

#include "include/my.h"

void modulo_c(va_list *flags)
{
    char c = va_arg(*flags, int);
    my_putchar(c);
}
