/*
** EPITECH PROJECT, 2021
** other
** File description:
** bintoint
*/
#include "nomdestruct.h"

static int do_calc(char *bin)
{
    int mult = 1;
    int nb = 0;
    int i = my_strlen(bin) - 1;

    for (; i >= 0; i--) {
        if (bin[i] == '1')
            nb += mult;
        mult *= 2;
    }
    return (nb);
}

int bin_to_int(char *bin)
{
    int nb = 0;
    if (my_strlen(bin) == 9 || my_strlen(bin) == 17 || my_strlen(bin) == 33) {
        nb = bin_to_int(bin + 1);
    }
    else
        nb = do_calc(bin);
    return (nb);
}