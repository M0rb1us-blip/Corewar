/*
** EPITECH PROJECT, 2020
** prog_en_cours
** File description:
** main
*/

#include "nomdestruct.h"

void free_ar(char **array)
{
    int i = 0;
    for (; array[i] != NULL; i++);
    for (; i >= 0; i--)
        free(array[i]);
    free(array);
}