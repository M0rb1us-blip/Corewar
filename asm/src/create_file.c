/*
** EPITECH PROJECT, 2021
** asm
** File description:
** create_file
*/
#include "nomdestruct.h"

char *dup_str(char *src)
{
    int len = my_strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));
    char c = 0;

    for (int i = 0; src[i] != '\0'; i++) {
        c = src[i];
        dest[i] = c;
    }
    dest[len] = '\0';
    return (dest);
}

void create_file(char *name, map_t *map, list_t list)
{
    int fd = open(name, O_WRONLY | O_APPEND | O_CREAT, 0664);

    if (fd != -1) {
        print_header(map, &list, fd);
        if (list != NULL)
            what_to_print_label(&list, fd);
    }
    free(map->corname);
    close(fd);
}