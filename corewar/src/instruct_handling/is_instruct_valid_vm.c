/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** is_instruct_valid_vm
*/

#include "../../include/struct.h"

bool is_instruct_valid_vm(char code)
{
    for (int i = 0; op_tab[i].code; i++)
        if (op_tab[i].code == code)
            return (true);
    return (false);
}