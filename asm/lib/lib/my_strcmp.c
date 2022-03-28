/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** my_strcmp
*/

#include "../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    if (my_strlen(s1) != my_strlen(s2))
        return (1);
    for (int i = 0; s1[i] && s2[i]; i++)
        if (s1[i] != s2[i])
            return (1);
    return (0);
}