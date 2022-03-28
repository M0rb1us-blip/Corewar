/*
** EPITECH PROJECT, 2020
** %S
** File description:
** my_printf
*/

#include "include/my.h"

char *have_oct(char results)
{
    char *my_base = "0123456789";
    char tmp[500];
    int i = 0;
    int len;

    for (i; results > 0; i++) {
        tmp[i] = my_base[results % 8];
        results = results / 8;
    }
    tmp[i] = '\0';
    len = my_strlen(tmp);
    for (len; len < 3; len++)
        my_putchar('0');
    my_putstr(my_revstr(tmp));
}

void modulo_s_uppercase(va_list *flags)
{
    char *results = va_arg(*flags, char *);
    char value;

    for (int i = 0; results[i] != '\0'; i++) {
        if (results[i] < 32 || results[i] >= 127) {
            my_putchar('\\');
            value = results[i];
            have_oct(value);
        }
        else
            my_putchar(results[i]);
    }
}
