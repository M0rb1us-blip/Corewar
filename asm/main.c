/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** main
*/

#include "include/nomdestruct.h"

void free_file(char **file)
{
    int i = 0;

    for (; file[i] != NULL; i++)
        free(file[i]);
    free(file);
}

void display_h(void)
{
    my_printf("USAGE\n");
    my_printf("./asm file_name[.s]\n");
    my_printf("DESCRIPTION\n");
    my_printf("file_namefile in assembly language to be converted ");
    my_printf("intofile_name.cor, an executable in the Virtual Machine.\n");
    exit(0);
}

char *get_name_cor(char *name)
{
    int len = my_strlen(name) - 1;
    int tmp;
    int i = 0;
    char *corname;

    for (tmp = len; tmp != 0 && name[tmp] != '/'; tmp--);
    if (tmp != 0)
        tmp++;
    corname = malloc(sizeof(char) * (len - tmp + 4));
    for (;tmp < len && name[tmp] != '\0'; i++, tmp++) {
        corname[i] = name[tmp];
    }
    corname[i] = 'c';
    corname[i + 1] = 'o';
    corname[i + 2] = 'r';
    corname[i + 3] = '\0';
    return (corname);
}

void do_asm(char **av, map_t *map)
{
    if (av[1][0] == '-' && av[1][1] == 'h')
        display_h();
    else {
        map->file = load_2d_array_from_file(av[1], map);
        map->name = find_name_text(map);
        map->comment = find_comment_text(map);
        map->corname = get_name_cor(av[1]);
        if (map->name == NULL || map->comment == NULL)
            exit(84);
    }
    parsing_args(map->file, map);
    free_ar(map->file);
    free(map->name);
    free(map->comment);
    return;
}

int main(int ac, char **av)
{
    map_t map;

    if (ac == 2)
        do_asm(av, &map);
    else
        return (84);
    return (0);
}