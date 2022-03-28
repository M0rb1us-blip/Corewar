/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** my_ls
*/

#include <stdlib.h>
#include "../include/my.h"

char *malloc_dest(char *dest, char *src)
{
    char *str = malloc(sizeof(char) * ((my_strlen(dest) + my_strlen(src)) \
    + 1));
    for (int i = 0; dest[i]; i++)
        str[i] = dest[i];
    return (str);
}

char *my_strcat(char *dest, char *src)
{
    int i = 0;

    for (; dest[i]; i++);
    dest = malloc_dest(dest, src);
    for (int j = 0; src[j]; i++, j++)
        dest[i] = src[j];
    dest[i] = '\0';
    return (dest);
}