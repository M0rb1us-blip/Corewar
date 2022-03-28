/*
** EPITECH PROJECT, 2021
** asm
** File description:
** do_type
*/
#include "nomdestruct.h"

char *do_type(char *type, int malloc_size)
{
    char *temp = malloc(sizeof(char) * malloc_size);
    int i;

    for (i = 0; type[i] != '\0'; i++)
        temp[i] = type[i];
    temp[i] = '\0';
    return (temp);
}