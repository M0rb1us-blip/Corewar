/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** my_get_nbr
*/

#include "../../include/struct.h"

int my_get_nbr(char const *str)
{
    int i = 0;
    int nbr = 0;

    if (str[0] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9') {
        nbr = nbr*10 + str[i] - '0';
        i++;
    }
    if (str[0] == '-')
        nbr *= -1;
    return (nbr);
}