/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** bytes_management
*/
#include "nomdestruct.h"


void avoid_conditionnal_branch_bytes(list_t *list);

void special_instruction(list_t *list)
{
    node_t *head = *list;
    while ((*list)->next != NULL) {
        if (my_strcmp((*list)->arg.inst, "live") == 0)
            (*list)->next->arg.bytes = 4;
        if (my_strcmp((*list)->arg.inst, "fork") == 0)
            (*list)->next->arg.bytes = 2;
        if (my_strcmp((*list)->arg.inst, "lfork") == 0)
            (*list)->next->arg.bytes = 2;
        if (my_strcmp((*list)->arg.inst, "zjmp") == 0)
            (*list)->next->arg.bytes = 2;
        if (my_strcmp((*list)->arg.inst, "sti") == 0 || \
        my_strcmp((*list)->arg.inst, "ldi") == 0) {
            avoid_conditionnal_branch_bytes(list);
        }
        *list = (*list)->next;
    }
    *list = head;
}

void bytes_get(list_t *list)
{
    node_t *head = *list;
    while ((*list)->next != NULL) {
        if (my_strcmp((*list)->arg.type, "instruction") == 0) {
            instruction_check_byte(list);
        }
        if (my_strcmp((*list)->arg.type, "label") == 0)
            (*list)->arg.bytes = 0;
        do_bytes(list);
        *list = (*list)->next;
    }
    if (my_strcmp((*list)->arg.type, "instruction") == 0) {
        instruction_check_byte(list);
    }
    if (my_strcmp((*list)->arg.type, "label") == 0)
        (*list)->arg.bytes = 0;
    do_bytes(list);
    *list = head;
    special_instruction(list);
}

int get_codingbyte_sub(list_t *list)
{
    node_t *head = *list;
    char *bin_cb = fill_bincb();
    int binnb = 0;

    if (my_strcmp((*list)->arg.type, "instruction") != 0)
        (*list)->arg.coding_byte = 0;
    if (my_strcmp((*list)->arg.type, "instruction") == 0) {
        *list = (*list)->next;
    }
    for (int i = 0; my_strcmp((*list)->arg.type, "instruction") != 0 && \
    my_strcmp((*list)->arg.type, "label") != 0 && (*list)->next != NULL;) {
        bin_cb = parse_for_codingbyte(list, bin_cb, &i);
        *list = (*list)->next;
    }
    binnb = bin_to_int(bin_cb);
    free(bin_cb);
    *list = head;
    return (binnb);
}

void get_codingbyte(list_t *list)
{
    node_t *head = *list;

    while ((*list)->next != NULL) {
        if (my_strcmp((*list)->arg.type, "instruction") == 0)
            (*list)->arg.coding_byte = get_codingbyte_sub(list);
        if (my_strcmp((*list)->arg.inst, "zjmp") == 0 || \
            my_strcmp((*list)->arg.inst, "fork") == 0 || \
            my_strcmp((*list)->arg.inst, "lfork") == 0 || \
            my_strcmp((*list)->arg.inst, "live") == 0)
            (*list)->arg.coding_byte = 0;
        *list = (*list)->next;
    }
    *list = head;
}

void bytes_pos_and_codingbyte(list_t *list)
{
    bytes_get(list);
    get_codingbyte(list);
    pos_byte(list);
}