/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** store_at_index
*/

#include "../../include/struct.h"

void store_at_index(list_t *pc, int value, int index, int prog_nb)
{
    list_t *mem = NULL;
    int curr_byte = 0x00FFFFFF;
    int to_write = 0;

    if (index > 0)
        mem = go_n_next(pc, index);
    else
        mem = go_n_prev(pc, -index);
    for (int i = 0; i < 4; i++) {
        to_write = value & (~curr_byte);
        to_write >>= (6 - 2 * i) * 4;
        to_write &= 255;
        curr_byte >>= 8;
        curr_byte |= 0xFF000000;
        mem->val = to_write;
        mem->owner = prog_nb;
        mem = mem->next;
    }
}