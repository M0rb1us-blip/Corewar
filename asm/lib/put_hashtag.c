/*
** EPITECH PROJECT, 2020
** put_hashtag
** File description:
** my_printf
*/

#include "include/my.h"

void put_hashtag(char format)
{
    if (format == 'o') {
        my_putchar('0');
        return;
    }
    else if (format == 'x') {
        my_putstr("0x");
        return;
    }
    format == 'X' ? my_putstr("0X") : my_putchar(format);
}
