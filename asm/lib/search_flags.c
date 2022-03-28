/*
** EPITECH PROJECT, 2020
** search_flags
** File description:
** my_printf
*/

#include "include/my.h"

int search_flags(char format, char *tableau_flags)
{
    for (int i = 0; tableau_flags[i] != '\0'; i++) {
        if (format == tableau_flags[i])
            return (i);
    }
    return (84);
}
