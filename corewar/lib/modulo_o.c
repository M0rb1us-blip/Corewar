/*
** EPITECH PROJECT, 2020
** %o
** File description:
** my_printf
*/

#include "include/my.h"

void modulo_o(va_list *flags)
{
    unsigned int results = va_arg(*flags, unsigned int);
    char *my_base = "01234567";
    char res_in_octal[100];
    int i = 0;

    for (i; results > 0; i++) {
        res_in_octal[i] = my_base[results % 8];
        results /= 8;
    }
    res_in_octal[i] = '\0';
    my_putstr(my_revstr(res_in_octal));
}