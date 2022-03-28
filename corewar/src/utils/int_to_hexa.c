/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** int_to_hexa
*/

#include "../../include/struct.h"

void int_to_hexa(int nb, char *str, int size, bool null)
{
    char *base = "0123456789ABCDEF";

    for (int i = size - 1; i >= 0; i--) {
        str[i] = base[nb & 15];
        nb >>= 4;
    }
    for (int i = 0; str[i]; i++)
        if (str[i] == '0' && null && i != size - 1)
            str[i] = ' ';
        else
            null = false;
}