/*
** EPITECH PROJECT, 2020
** prog_en_cours
** File description:
** list_add_at_front
*/
#include "list.h"
#include <stdio.h>

void list_add_at_front(list_t *list, list_arg_t arg)
{
    node_t *head = *list;
    node_t *node = malloc(sizeof(node_t));
    if (node == NULL)
        return;
    node->prev = NULL;
    node->arg = arg;
    node->next = NULL;
    if (*list != NULL)
        node->next = head;
    *list = node;
}