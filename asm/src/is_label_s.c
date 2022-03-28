/*
** EPITECH PROJECT, 2021
** test
** File description:
** is_label_s
*/

int is_label_s(char *str)
{
    if (str[0] == '%' && str[1] == ':')
        return (0);
    return 1;
}