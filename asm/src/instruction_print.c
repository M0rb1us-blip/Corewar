/*
** EPITECH PROJECT, 2021
** asm
** File description:
** instruction_print
*/
#include "nomdestruct.h"

void as_coding_bytes_print(list_arg_t arg, int fd)
{
    if (arg.coding_byte > 0)
        my_fputchar(fd, arg.coding_byte);
}