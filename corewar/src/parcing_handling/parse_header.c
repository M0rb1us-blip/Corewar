/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** parse_header
*/

#include "../../include/struct.h"

header_t *parse_header_corewar(char **file, int *size)
{
    header_t *header = NULL;

    if (COREWAR_EXEC_MAGIC != reverse_bytes(*(int *)(*file)))
        return (NULL);
    *file += 4;
    *size -= 4;
    if (!(header = malloc(sizeof(header_t))))
        return (NULL);
    *header = (header_t){0};
    for (int i = 0; i < PROG_NAME_LENGTH && file[0][i]; i++)
        header->prog_name[i] = file[0][i];
    *file += PROG_NAME_LENGTH + 8;
    *size -= PROG_NAME_LENGTH + 8;
    for (int i = 0; i < COMMENT_LENGTH && file[0][i]; i++)
        header->comment[i] = file[0][i];
    *file += COMMENT_LENGTH + 4;
    *size -= COMMENT_LENGTH + 4;
    header->prog_size = *size;
    return (header);
}