/*
** EPITECH PROJECT, 2020
** fill_2d_array
** File description:
** my_sokoban
*/

#include "../include/nomdestruct.h"

char **fill_2d_array(char **str, char *temp)
{
    int i;
    int x = 0;
    int y = 0;

    for (i = 0; temp[i] != '\0'; i++, x++) {
        if (temp[i] == '\n' && temp[i + 1] != '\0') {
            str[y][x] = '\0';
            y++;
            i++;
            x = 0;
        }
        str[y][x] = temp[i];
    }
    str[y][x] = '\0';
    if (x == 0)
        str[y] = NULL;
    return (str);
}
