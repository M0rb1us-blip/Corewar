/*
** EPITECH PROJECT, 2020
** %b
** File description:
** my_printf
*/

#include "include/my.h"

void modulo_b(va_list *flags)
{
    unsigned int results = va_arg(*flags, unsigned int);
    char *my_base = "01";
    char res_in_bin[500];
    int i = 0;

    for (i; results > 0; i++) {
        res_in_bin[i] = my_base[results % 2];
        results = results / 2;
    }
    res_in_bin[i] = '\0';
    my_putstr(my_revstr(res_in_bin));
}
