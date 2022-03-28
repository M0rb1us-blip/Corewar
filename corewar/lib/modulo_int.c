/*
** EPITECH PROJECT, 2020
** %d & %i
** File description:
** my_printf
*/

#include "include/my.h"

void modulo_int(va_list *flags)
{
    int results = va_arg(*flags, int);
    my_put_nbr(results);
}