/*
** EPITECH PROJECT, 2021
** Assembler
** File description:
** inttobin
*/
#include "nomdestruct.h"

static void convert_bin_to_neg(char *result)
{
    for (int i = 0; result[i] != '\0'; i++) {
        if (result[i] == '0')
            result[i] = '1';
        else
            result[i] = '0';
    }
}

static void do_calc(int nb, int i, char *base, char *result)
{
    int stock;
    if (nb == 0) {
        for (; i >= 0; i--)
            result[i] = '0';
        return;
    }
    for (; nb > my_strlen(base) - 1; i--) {
        stock = nb % my_strlen(base);
        result[i] = base[stock];
        nb /= my_strlen(base);
    }
    if (nb > 0) {
        stock = nb % my_strlen(base);
        result[i] = base[stock];
    }
    for (i--; i >= 0; i--)
        result[i] = base[0];
}

char *int_to_bin_o(int nb)
{
    int neg = 0;
    int i = 7;
    char *result;
    char *base = "01";
    if (nb < 0) {
        nb *= -1;
        nb--;
        neg++;
        i = 8;
    }
    result = malloc(sizeof(char) * (i + 2));
    result[i + 1] = '\0';
    do_calc(nb, i, base, result);
    if (neg > 0)
        convert_bin_to_neg(result);
    return (result);
}

char *int_to_bin_do(int nb)
{
    int neg = 0;
    int i = 15;
    char *result;
    char *base = "01";
    if (nb < 0) {
        nb *= -1;
        nb--;
        neg++;
        i = 16;
    }
    result = malloc(sizeof(char) * (i + 2));
    result[i + 1] = '\0';
    do_calc(nb, i, base, result);
    if (neg > 0)
        convert_bin_to_neg(result);
    return (result);
}

char *int_to_bin_qo(int nb)
{
    int neg = 0;
    int i = 31;
    char *result;
    char *base = "01";
    if (nb < 0) {
        nb *= -1;
        neg++;
        nb--;
        i = 32;
    }
    result = malloc(sizeof(char) * (i + 2));
    result[i + 1] = '\0';
    do_calc(nb, i, base, result);
    if (neg > 0)
        convert_bin_to_neg(result);
    return (result);
}