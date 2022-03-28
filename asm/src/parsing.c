/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** parsing
*/

#include "../include/nomdestruct.h"

char *malloc_inst(char *file, int i)
{
    char *inst;
    int j = 0;

    for (; file[i] && file[i] != ' ' && file[i] != ','; i++, j++);
    inst = malloc(sizeof(char) * j + 1);
    return (inst);
}

void add_in_arg(char *inst, list_arg_t *arg, list_t *list)
{
    static int pos = 0;

    (*arg).inst = inst;
    (*arg).pos = pos;
    pos += 1;
    (*arg).type = find_type((*arg).inst);
    list_add_at_back(list, *arg);
}

int find_tocom(char *file)
{
    int i = 0;

    for (; file[i] != '\0' && file[i] != '#'; i++);
    return (i);
}

void parsing_args_sub(char *file, list_t *list, char *inst)
{
    list_arg_t arg = {"0", 0, 0, 0, 0};
    static int i = 0;
    int j = 0;
    int tocom = find_tocom(file);

    if (avoid_too_much_line(tocom, &i, file, inst))
        return;
    for (; (file[i] == ' ' || file[i] == ',') && file[i]; i++);
    inst = malloc_inst(file, i);
    for (; file[i] && file[i] != ' ' && file[i] != ','; i++, j++)
        inst[j] = file[i];
    inst[j] = '\0';
    if (avoid_too_much_line(tocom, &i, file, inst))
        return;
    add_in_arg(inst, &arg, list);
    if (file[i])
        return (parsing_args_sub(file, list, inst));
    i = 0;
}

void parsing_args(char **file, map_t *map)
{
    list_t list = NULL;
    int i = 0;
    char *inst = NULL;

    i = check_com_or_dots(file);
    for (; file[i] != NULL; i++) {
        parsing_args_sub(file[i], &list, inst);
    }
    if (list == NULL)
        create_file(map->corname, map, list);
    else {
        bytes_pos_and_codingbyte(&list);
        if (check_maj(&list) == 1)
            exit(84);
        create_file(map->corname, map, list);
    }
    del_list(&list);
    return;
}