/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** register_handling
*/

#include "../../include/struct.h"

bool register_handling(instruction_t *instruction)
{
    for (int i = 0; instruction->description[i]; i++)
        if (instruction->description[i] == 1 &&
            (instruction->args[i] < 1 || instruction->args[i] > REG_NUMBER))
            return (false);
    return (true);
}