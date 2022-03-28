/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** find_type2
*/

#include "nomdestruct.h"

int is_a_number(char *str)
{
    for (int i = 1; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (-1);
    return (0);
}

int is_a_number_with_ind(char *str, int i)
{
    for (; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (-1);
    return (0);
}

int is_register(char *str)
{
    if (str[0] == 'r') {
        return (is_a_number(str));
    }
    return (-1);
}