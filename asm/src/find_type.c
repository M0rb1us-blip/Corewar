/*
** EPITECH PROJECT, 2021
** asm
** File description:
** find_type
*/

#include <stddef.h>
#include "../include/nomdestruct.h"

char *do_type(char *type, int mallocsize);

int is_label_s(char *str);

int is_a_number(char *str);

int is_a_number_with_ind(char *str, int i);

int is_register(char *str);

static int is_direct(char *str)
{
    if (str[0] == '%' && str[1] != '-') {
        return (is_a_number(str));
    }
    if (str[0] == '%' && str[1] == '-') {
        return (is_a_number_with_ind(str, 2));
    }
    return (-1);
}

static int is_indirect(char *str)
{
    int i = 0;

    if (str[0] == '-')
        i = 1;
    return (is_a_number_with_ind(str, i));
}

int is_instruction(char *str)
{
    for (int i = 0; op_tab[i].mnemonique != 0; i++)
        if (my_strcmp(str, op_tab[i].mnemonique) == 0)
            return (0);
    return (-1);
}

static int avoid_too_many_line(char **type, char *str)
{
    if (is_direct(str) == 0) {
        *type = do_type("direct\0", 7);
        return (1);
    }
    if (is_label_s(str) == 0) {
        *type = do_type("labelspe\0", 9);
        return (1);
    }
    return 0;
}

char *find_type(char *str)
{
    char *type = NULL;

    if (is_instruction(str) == 0){
        type = do_type("instruction\0", 12);
        return (type);
    }
    if (is_register(str) == 0) {
        type = do_type("register\0", 9);
        return (type);
    }
    if (is_indirect(str) == 0) {
        type = do_type("indirect\0", 9);
        return (type);
    }
    if (avoid_too_many_line(&type, str) == 1) {
        return (type);
    }
    type = do_type("label\0", 6);
    return (type);
}
