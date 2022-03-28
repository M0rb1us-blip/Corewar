/*
** EPITECH PROJECT, 2021
** my_malloc
** File description:
** malloc function with error handling
*/
#include "nomdestruct.h"

void *my_malloc(size_t len)
{
    void *tmp = malloc(len);
    if (tmp == NULL) {
        my_printf("Malloc is NULL");
        return (NULL);
    }
    return (tmp);
}