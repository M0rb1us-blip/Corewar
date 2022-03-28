/*
** EPITECH PROJECT, 2021
** load 2d array from file
** File description:
** my_sokoban
*/

#include "nomdestruct.h"

char *openfile(char *filepath, map_t *map)
{
    struct stat results;
    int res;

    stat(filepath, &results);
    map->fd = open(filepath, O_RDONLY);
    if (map->fd == -1)
        exit(84);
    map->buffer = malloc(sizeof(char) * results.st_size + 1);
    res = read(map->fd, map->buffer, results.st_size);
    map->buffer[results.st_size] = '\0';
    if (res == -1)
        exit(84);
    return (map->buffer);
}

char **load_2d_array_from_file(char *filepath, map_t *map)
{
    map->buffer = openfile(filepath, map);
    map->file = my_str_to_array(map->buffer);
    free(map->buffer);
    return (map->file);
}
