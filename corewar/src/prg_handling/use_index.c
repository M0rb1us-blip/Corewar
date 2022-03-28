/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** use_index
*/

#include "../../include/struct.h"

bool use_index(int code)
{
    if (code == _ldi || code == _lldi || code == _fork ||
        code == _lfork || code == _zjmp || code == _sti)
        return (true);
    return (false);
}