/*
** EPITECH PROJECT, 2020
** prog_en_cours
** File description:
** linked_list
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct list_arg_s
{
    char *inst;
    int pos;
    char *type;
    int bytes;
    int coding_byte;
} list_arg_t;

typedef struct node_s
{
    list_arg_t arg;
    struct node_s *next;
    struct node_s *prev;
} node_t;

typedef node_t *list_t;

void list_add_at_back(list_t *list, list_arg_t arg);
void list_add_at_front(list_t *list, list_arg_t arg);
void del_list(list_t *list);
void list_show(list_t *list);