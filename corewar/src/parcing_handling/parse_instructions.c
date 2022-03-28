/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** parse_instructions
*/

#include "../../include/struct.h"

bool parse_instruction(char **file, int *size)
{
    instruction_t *instruction = malloc(sizeof(instruction_t));

    if (instruction == NULL)
        return (false);
    instruction->code = file[0][0];
    *file += 1;
    *size -= 1;
    if (!only_one_arg(instruction->code)) {
        instruction->description = parse_description(file[0][0]);
        if (instruction->description == NULL)
            return (false);
        *file += 1;
        *size -= 1;
    }
    else
        instruction->description = NULL;
    instruction->args = parse_args(file, size, instruction->description);
    if (instruction->args == NULL)
        return (false);
    free(instruction);
    return (true);
}

bool parse_instructions(char *file, int size)
{
    while (size > 0)
        if (!parse_instruction(&file, &size))
            return (false);
    return (true);
}