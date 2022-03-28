/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** header
*/
#include "nomdestruct.h"

void print_magic_number(int fd)
{
    my_fputchar(fd, 0);
    my_fputchar(fd, 234);
    my_fputchar(fd, 131);
    my_fputchar(fd, 243);
}

int get_prog_len(list_t *list)
{
    node_t *head = *list;
    int size = 0;

    while ((*list)->next != NULL)
        *list = (*list)->next;
    size = (*list)->arg.pos + (*list)->arg.bytes;
    *list = head;
    return size;
}

void print_header(map_t *map, list_t *list, int fd)
{
    int name_len = my_strlen(map->name) + 4;
    int comment_len = my_strlen(map->comment) + 12;
    int prog_len = 0;
    print_magic_number(fd);
    my_fputstr(fd, map->name);
    for (int i = name_len; i < PROG_NAME_LENGTH; i++)
        my_fputchar(fd, 0);
    for (int i = 0; i < 10; i++)
        my_fputchar(fd, 0);
    if (*list != NULL)
        prog_len = get_prog_len(list);
    write_bytes_with_separate(2, prog_len, fd);
    my_fputstr(fd, map->comment);
    for (int i = comment_len; i < COMMENT_LENGTH; i++)
        my_fputchar(fd, 0);
    for (int i = 0; i < 16; i++)
        my_fputchar(fd, 0);
}