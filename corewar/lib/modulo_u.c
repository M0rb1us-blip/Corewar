/*
** EPITECH PROJECT, 2020
** %u
** File description:
** my_printf
*/

#include "include/my.h"

void modulo_u(va_list *flags)
{
    unsigned int results = va_arg(*flags, unsigned int);
    char *my_base = "0123456789";
    char res_in_dec[100];
    int i = 0;

    for (i; results > 0; i++) {
        res_in_dec[i] = my_base[results % 10];
        results = results / 10;
    }
    res_in_dec[i] = '\0';
    my_putstr(my_revstr(res_in_dec));
}
