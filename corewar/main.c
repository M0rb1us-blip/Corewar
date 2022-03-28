/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** main
*/

#include "include/struct.h"

int main(int ac, char **av)
{
    champion_t **champions = malloc(sizeof(champion_t *));
    list_t *memory = create_list();
    int dump = -1;

    if (memory == NULL || !champions)
        return (84);
    champions[0] = NULL;
    if (!argument_handling(ac, av, &champions, &dump))
        return (84);
    if (!load_champ_instruct_in_mem(champions, memory))
        return (84);
    if (!start_prg(champions, memory, dump))
        return (84);
    destroy_champ(champions);
    clear_list(memory);
    return (0);
}