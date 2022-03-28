/*
** EPITECH PROJECT, 2021
** asm
** File description:
** count_char
*/

#include "../include/nomdestruct.h"

int count_char(char **text, int i, int j)
{
    int count = 0;

    for (; text[i][j] != '\0' && text[i][j] != '"'; j++)
        count++;
    return (count);
}