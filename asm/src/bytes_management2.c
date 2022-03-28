/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** bytes_management2
*/
#include "nomdestruct.h"

void avoid_conditionnal_branch_bytes(list_t *list)
{
    if (my_strcmp((*list)->next->arg.type, "direct") == 0)
        (*list)->next->arg.bytes = 2;
    if (my_strcmp((*list)->next->next->arg.type, "direct") == 0)
        (*list)->next->next->arg.bytes = 2;
    if (my_strcmp((*list)->next->next->next->arg.type, "direct") == 0)
        (*list)->next->next->next->arg.bytes = 2;
}

void put_byte_in_list(list_t *list, int byte)
{
    (*list)->arg.bytes = byte;
}

void instruction_check_byte(list_t *list)
{
    if (my_strcmp((*list)->arg.inst, "live") == 0)
        return (put_byte_in_list(list, 1));
    if (my_strcmp((*list)->arg.inst, "fork") == 0)
        return (put_byte_in_list(list, 1));
    if (my_strcmp((*list)->arg.inst, "lfork") == 0)
        return (put_byte_in_list(list, 1));
    if (my_strcmp((*list)->arg.inst, "zjmp") == 0)
        return (put_byte_in_list(list, 1));
    return (put_byte_in_list(list, 2));
}

void do_bytes(list_t *list)
{
    if (my_strcmp((*list)->arg.type, "register") == 0) {
        (*list)->arg.bytes = 1;
    }
    if (my_strcmp((*list)->arg.type, "direct") == 0) {
        (*list)->arg.bytes = 4;
    }
    if (my_strcmp((*list)->arg.type, "indirect") == 0) {
        (*list)->arg.bytes = 2;
    }
    if (my_strcmp((*list)->arg.type, "labelspe") == 0) {
        (*list)->arg.bytes = 2;
    }
}