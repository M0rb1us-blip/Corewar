/*
** EPITECH PROJECT, 2020
** prog_en_cours
** File description:
** list_add_at_back
*/
#include "list.h"
#include <stdio.h>

void list_add_at_back(list_t *list, list_arg_t arg)
{
    node_t *head = *list;
    node_t *temp = *list;
    node_t *node = malloc(sizeof(node_t));
    if (node == NULL)
        return;
    node->arg = arg;
    node->next = NULL;
    node->prev = NULL;
    if (*list == NULL) {
        *list = node;
        return;
    }
    while ((*list)->next != NULL) {
        *list = (*list)->next;
    }
    temp = *list;
    (*list)->next = node;
    *list = (*list)->next;
    (*list)->prev = temp;
    *list = head;
}