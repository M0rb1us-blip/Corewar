/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** destroy_instructions
*/

#include "../../include/struct.h"

void destroy_instruction(instruction_t *instruction)
{
    if (!instruction)
        return;
    if (instruction->args)
        free(instruction->args);
    if (instruction->description)
        free(instruction->description);
    free(instruction);
}