/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** create_champion
*/

#include "../../include/struct.h"

champion_t *create_champion(char *path, int n, int a)
{
    char *file = NULL;
    int size = 0;
    champion_t *champion = malloc(sizeof(champion_t));

    if (champion == NULL)
        return (NULL);
    *champion = (champion_t){0};
    if (!(champion->header = get_champion_info(path, &file)))
        return (NULL);
    champion->instructions = file;
    if (parse_instructions(file, size) == false)
        return (NULL);
    champion->start_offset = a;
    champion->prog_number = n;
    return (champion);
}