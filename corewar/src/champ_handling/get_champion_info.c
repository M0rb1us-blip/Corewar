/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** get_champion_info
*/

#include "../../include/struct.h"

header_t *get_champion_info(char *file_path, char **file_content)
{
    int fd = open(file_path, O_RDONLY);
    header_t *header = malloc(sizeof(header_t));

    if (fd == -1 || !header)
        return (NULL);
    *header = (header_t){0};
    if (read(fd, header, sizeof(header_t)) != sizeof(header_t))
        return (NULL);
    header->magic = reverse_bytes(header->magic);
    header->prog_size = reverse_bytes(header->prog_size);
    if (header->magic != COREWAR_EXEC_MAGIC || header->prog_size < 0 ||
    !(*file_content = malloc(sizeof(char) * (header->prog_size + 1)))) {
        (free(header), close(fd));
        return (NULL);
    }
    (*file_content)[header->prog_size] = 0;
    if (read(fd, *file_content, header->prog_size) != header->prog_size) {
        (free(header), close(fd), free(*file_content));
        return (NULL);
    } close(fd);
    return (header);
}