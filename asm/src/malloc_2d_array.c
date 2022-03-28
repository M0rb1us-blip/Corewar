/*
** EPITECH PROJECT, 2020
** malloc_2d_array
** File description:
** my_sokoban
*/

#include "../include/nomdestruct.h"

char **malloc_2d_array(char **map, int rows, int cols)
{
    int i;

    map = malloc(sizeof(char *) * (rows + 1));
    map[rows] = NULL;
    for (i = 0; i < rows; i++)
        map[i] = malloc(sizeof(char) * cols + 1);
    return (map);
}