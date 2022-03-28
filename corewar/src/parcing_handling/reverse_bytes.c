/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** reverse_bytes
*/

#include "../../include/struct.h"

int reverse_bytes(unsigned int x)
{
    unsigned int out = 0;
    unsigned int byte;

    for (int i = 0; i < 4; ++i) {
        byte = (x >> 8 * i) & 0xff;
        out |= byte << (24 - 8 * i);
    }
    return (out);
}

int reverse_bytes_two(unsigned int x)
{
    unsigned int out = 0;
    unsigned int byte;

    for (int i = 0; i < 2; ++i) {
        byte = (x >> 8 * i) & 0xff;
        out |= byte << (8 - 8 * i);
    }
    return (out);
}