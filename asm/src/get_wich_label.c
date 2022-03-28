/*
** EPITECH PROJECT, 2021
** asm
** File description:
** get_wich_label
*/
#include "nomdestruct.h"

int get_wich_label(list_t *list, char *label)
{
    node_t *head = *list;
    int pos = 0;

    while (*list != NULL) {
        if (my_strncmp((*list)->arg.inst, label, my_strlen(label)) == 0) {
            pos = (*list)->arg.pos;
            *list = head;
            return (pos);
        }
        *list = (*list)->next;
    }
    *list = head;
    return (0);
}

void write_bytes_with_separate(int bytes, int val, int fd)
{
    char *bin = NULL;
    if (bytes == 4) {
        bin = int_to_bin_qo(val);
        my_fputchar(fd, sperate_qoct_into_int(bin, 0));
        my_fputchar(fd, sperate_qoct_into_int(bin, 1));
        my_fputchar(fd, sperate_qoct_into_int(bin, 2));
        my_fputchar(fd, sperate_qoct_into_int(bin, 3));
    }
    if (bytes == 2) {
        bin = int_to_bin_do(val);
        my_fputchar(fd, sperate_doct_into_int(bin, 1));
        my_fputchar(fd, sperate_doct_into_int(bin, 0));
    }
    if (bytes == 1) {
        my_fputchar(fd, val);
        return;
    }
    free(bin);
}

int check_wich_instruction(char *str)
{
    for (int i = 0; op_tab[i].mnemonique != 0; i++)
        if (my_strcmp(str, op_tab[i].mnemonique) == 0)
            return (i + 1);
    return (-1);
}

int write_else(list_arg_t arg, list_t *list2, int last_inst_pos)
{
    int tmp = 0;

    if (my_strcmp(arg.type, "direct") == 0 || \
    my_strcmp(arg.type, "indirect") == 0 || \
    my_strcmp(arg.type, "register") == 0) {
        return (my_getnbr(arg.inst));
    }
    if (my_strcmp(arg.type, "instruction") == 0)
        return (check_wich_instruction(arg.inst));
    if (my_strcmp(arg.type, "labelspe") == 0) {
        tmp = get_wich_label(list2, arg.inst + 2);
        tmp -= last_inst_pos;
        return tmp;
    }
    return -1;
}

int what_to_print_label(list_t *list, int fd)
{
    node_t *head = *list;
    list_t list2 = *list;
    int last_inst_pos = 0;
    int tmp = 0;

    while (*list != NULL) {
        if (write_else((*list)->arg, &list2, last_inst_pos) != -1)
            tmp = write_else((*list)->arg, &list2, last_inst_pos);
        if (tmp == -1)
            return -1;
        if (my_strcmp((*list)->arg.type, "instruction") != 0)
            write_bytes_with_separate((*list)->arg.bytes, tmp, fd);
        else {
            write_bytes_with_separate(1, tmp, fd);
            as_coding_bytes_print((*list)->arg, fd);
            last_inst_pos = (*list)->arg.pos;
        }
        *list = (*list)->next;
    }
    *list = head;
    return 0;
}