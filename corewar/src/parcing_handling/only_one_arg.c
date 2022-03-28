/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** only_one_arg
*/

#include "../../include/struct.h"

bool only_one_arg(int code)
{
    if (code == _live || code == _zjmp || code == _fork ||
        code == _lfork)
        return (true);
    return (false);
}