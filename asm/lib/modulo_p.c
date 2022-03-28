/*
** EPITECH PROJECT, 2020
** %p
** File description:
** my_printf
*/

#include "include/my.h"

void modulo_p(va_list *flags)
{
    unsigned long int results = va_arg(*flags, unsigned long int);
    char *my_base = "0123456789abcdef";
    char res_in_hexa[500];
    int i = 0;
    char *prefix = "0x";

    for (i; results > 0; i++) {
        res_in_hexa[i] = my_base[results % 16];
        results = results / 16;
    }
    res_in_hexa[i] = '\0';
    my_putstr(prefix);
    my_putstr(my_revstr(res_in_hexa));
}