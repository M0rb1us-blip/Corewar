/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** my_strcmp
*/

#include "../../include/struct.h"

bool my_strcmp(char const *str, char const *str2)
{
    for (int i = 0; str[i] || str2[i]; i++)
        if (str[i] != str2[i])
            return (false);
    return (true);
}