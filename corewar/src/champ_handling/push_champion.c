/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** push_champion
*/

#include "../../include/struct.h"

champion_t **push_champion(champion_t **arr, champion_t *add)
{
    champion_t **new_arr = NULL;
    int nb_elem_arr;
    int copy_elems;

    if (add == NULL)
        return (NULL);
    for (nb_elem_arr = 0; arr[nb_elem_arr] != NULL; nb_elem_arr++);
    new_arr = malloc(sizeof(champion_t *) * (nb_elem_arr + 2));
    if (new_arr == NULL)
        return (NULL);
    for (copy_elems = 0; copy_elems < nb_elem_arr; copy_elems++)
        new_arr[copy_elems] = arr[copy_elems];
    new_arr[copy_elems] = add;
    new_arr[copy_elems + 1] = NULL;
    free(arr);
    return (new_arr);
}