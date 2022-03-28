/*
** EPITECH PROJECT, 2020
** %x
** File description:
** my_printf
*/

#include "include/my.h"

void modulo_x_uppercase(va_list *flags)
{
    unsigned int results = va_arg(*flags, unsigned int);
    char *my_base = "0123456789ABCDEF";
    char res_in_hexa[100];
    int i = 0;

    for (i; results > 0; i++) {
        res_in_hexa[i] = my_base[results % 16];
        results = results / 16;
    }
    res_in_hexa[i] = '\0';
    my_putstr(my_revstr(res_in_hexa));
}