/*
** EPITECH PROJECT, 2020
** print_bad_flags
** File description:
** my_printf
*/

#include "include/my.h"

void print_bad_flags(char *format, int i)
{
    my_putchar(format[i - 1]);
    my_putchar(format[i]);
}