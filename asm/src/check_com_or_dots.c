/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** check_com_or_dots
*/

#include "nomdestruct.h"

int avoid_too_much_line(int tocom, int *i, char *file, char *inst)
{
    if (*i > tocom) {
        *i = 0;
        free(inst);
        return 1;
    }
    if (tocom == 0 && file[*i] == '\0') {
        *i = 0;
        free(inst);
        return 1;
    }
    return 0;
}

static int avoid_cdt_br_two(char *file)
{
    for (int j = 0; file[j]; j++)
        if (file[j] == '.')
            return (1);
    return (0);
}

int avoid_cdt_br(char *file)
{
    for (int j = 0; file[j]; j++)
        if (file[j] == '.' || file[j] == '#')
            return (1);
    return (0);
}

int check_com_or_dots(char **file)
{
    int i = 0;
    int dc = 0;
    int point = 0;

    for (; file[i] != NULL; i++) {
        dc += avoid_cdt_br(file[i]);
        point += avoid_cdt_br_two(file[i]);
        if (point >= 2 && file[i][0] == '\0')
            return (i);
    }
    return (dc);
}