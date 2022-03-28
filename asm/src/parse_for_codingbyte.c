/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** parse_for_codingbyte
*/

#include "nomdestruct.h"

char *fill_midcb(void)
{
    char *mid_cb = malloc(sizeof(char) * 3);

    for (int i = 0; i != 2; i++)
        mid_cb[i] = '0';
    mid_cb[2] = '\0';
    return (mid_cb);
}

char *fill_bincb(void)
{
    char *bin_cb = malloc(sizeof(char) * 9);

    for (int i = 0; i != 8; i++)
        bin_cb[i] = '0';
    bin_cb[8] = '\0';
    return (bin_cb);
}

char *parse_for_other(list_t *list, char *mid_cb)
{
    if (my_strcmp((*list)->arg.type, "register") == 0) {
        mid_cb[0] = '0';
        mid_cb[1] = '1';
    }
    else if (my_strcmp((*list)->arg.type, "direct") == 0 || \
    my_strcmp((*list)->arg.type, "labelspe") == 0) {
        mid_cb[0] = '1';
        mid_cb[1] = '0';
    }
    else if (my_strcmp((*list)->arg.type, "indirect") == 0) {
        mid_cb[0] = '1';
        mid_cb[1] = '1';
    }
    return (mid_cb);
}

char *parse_for_codingbyte(list_t *list, char *bin_cb, int *i)
{
    char *mid_cb = fill_midcb();

    mid_cb = parse_for_other(list, mid_cb);
    for (int j = 0; j != 2 && *i < 8; j++, (*i)++)
        bin_cb[*i] = mid_cb[j];
    free(mid_cb);
    return (bin_cb);
}