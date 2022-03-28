/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** my_getnbr
*/
#include "../include/my.h"

int	my_getnbr(char const *str)
{
    int	signe = 1;
    long nbr = 0;
    int j = 0;

    for (int i = 0; (str[i] < '0' || str[i] > '9') && str[i] != '\0'; i++) {
        j = i + 1;
        if (str[i] == '-')
            signe = signe * -1;
    }
    for (; str[j] >= '0' && str[j] <= '9'; j++) {
        nbr = nbr * 10;
        nbr += (str[j] - '0');
    }
    return (nbr * signe);
}